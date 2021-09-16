/*create a class time with members hour, minutes and secs 
and write the code to add 2 time objects the object must be passed as function argument*/
#include <iostream>

class Time{
public:
    Time(int hr,int mi,int se):
        h(hr),m(mi),s(se){}

    Time(const Time& t){
        //copy constructor
        this->h = t.h;
        this->m = t.m;
        this->s = t.s;
    }
    void showTime(){
        std::cout<<"in hh:mm:ss -> "<<h<<":"<<m<<":"<<s<<"\n";
    }
    void addTime(Time &, Time &);

private:
    int h,m,s;
};

void Time::addTime(Time &a, Time &b){
    
    s = a.s + b.s;
    this->m = (this->s)/60;
    this->s %= 60;
    this->m += a.m + b.m;
    this->h = (this->m) / 60;
    this->m %= 60;
    this->h += a.h + b.h;
}

int main(int argc, char const *argv[])
{
    Time t1 = Time(12,15,30);
    t1.showTime();
    Time t2 = Time(1,45,15);
    t2.showTime();
    Time res = Time(0,0,0);
    res.addTime(t1, t2);
    res.showTime();
    remove(argv[0]);
    return 0;
}
