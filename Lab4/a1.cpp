/*Create a class TIME with member’s hour, minute and second. Write a program that adds two
time objects. The objects must be passed as function arguments*/
#include <iostream>

class Time{
public:
    Time(int h, int m, int s):hrs(h),min(m),sec(s){}

    void display(){
        std::cout<<hrs<<" : "<<min<<" : "<<sec<<std::endl;
    }
    void add(Time, Time);
private:
    int hrs,min,sec;
};

void Time::add(Time t1, Time t2){
    this->sec = t1.sec+t2.sec;
    this->min = (this->sec)/60;
    this->sec %= 60;
    this->min += t1.min+t2.min;
    this->hrs = (this->min)/60;
    this->min %= 60; 

    this->hrs += t1.hrs+t2.hrs;
}

int main(int argc, char const *argv[])
{
    Time t1=Time(12,30,45);
    Time t2=Time(2,30,50);
    t1.display();
    t2.display();
    Time t3(0,0,0);
    t3.add(t1,t2);
    t3.display();
    remove(argv[0]);
    return 0;
}
