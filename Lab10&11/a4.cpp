/*WAP in C++ which will overload unary prefix ++ and unary postfix -– operator. (Hint: Time
class)*/
#include <iostream>
using namespace std;

class Time {
    int hrs, min, sec;

public:
    Time(int h=0, int m=0, int s=0) : hrs(h), min(m), sec(s){}

    void timeNow() {
        cout<<hrs<<":"<<min<<":"<<sec<<endl;
    }

    void operator-- (int) {
        sec--;
        if(sec<0){
            sec+=60;
            min--;
        }
        if(min<0){
            min+=60;
            hrs--;
        }
    }

    void operator++ () {
        sec++;
        if (sec>=60) {
            sec -= 60;
            min++;
        }
        if(min>=60) {
            min -= 60;
            hrs++;
        }
    }
};

int main(int argc, char** argv) {
    Time t1(4,59,59);

    t1.timeNow();
    ++t1;
    t1.timeNow();

    t1--;
    t1.timeNow();
    remove(argv[0]);
    return EXIT_SUCCESS;
}