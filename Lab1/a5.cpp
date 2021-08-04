/*
+-----------------------+
| Dipankar Das 20051554 |
+-----------------------+
WAP in C++ to input two integers and calculate their sum and average using classes.*/
#include <iostream>

class Sum{
    public:
        Sum(int x, int y):a(x),b(y){}

        int exec(){
            return a+b;
        }

    private:
        int a;
        int b;
};

class Average{
    public:
        Average(int tot, int no):total(tot), num(no){}
        
        float exec(){
            return (float)total/ num;
        }

    private:
        int total;
        int num;
};

int main(int argc, char const *argv[])
{
    Sum s=Sum(80, 90);
    std::cout<<"the sum= "<<s.exec()<<std::endl;

    Average a = Average(s.exec(), 2);

    std::cout<<"the average= "<<a.exec()<<std::endl;

    remove(argv[0]);
    return 0;
}
