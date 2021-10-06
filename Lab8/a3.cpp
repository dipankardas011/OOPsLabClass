/*create a class TIME with data members hour, minute and second and a constructor to initialize the data member WAP to adds 2 time objects the objects must be passed as function arguments design separate function whatevernecessary finally result should be displayed in hh:mm:ss format*/
#include <iostream>
#include <iomanip>
using std::cin;
using std::endl;
using std::cout;

class Time{
    int hour, minute, second;
public:
    Time(int h=0, int m=0, int s=0):hour(h),minute(m),second(s){}
    Time(const Time& ob){
        this->hour = ob.hour;
        this->minute = ob.minute;
        this->second = ob.second;
    }
    void display(){
        cout<<std::setfill('0');
        cout<<std::setw(2)<<hour<<":"
            <<std::setw(2)<<minute<<":"
            <<std::setw(2)<<second<<endl;
    }
    void addTime(const Time& ob1, const Time& ob2)
    {
        this->second = ob1.second + ob2.second;
        this->minute = this->second / 60;
        this->second %= 60;

        this->minute += ob1.minute + ob2.minute;
        this->hour = this->minute / 60;
        this->minute %= 60;

        this->hour += ob1.hour + ob2.hour;
    }
};

int main(int argc, char** argv) {
    Time t1(13,5,3);
    Time t2(5,6,59);
    Time t3;
    t3.addTime(t1,t2);
    t3.display();
    remove(argv[0]);
    return EXIT_SUCCESS;
}