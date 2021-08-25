/*Write a program to find out the greatest between two numbers defined in two different classes by using friend function..*/
#include <iostream>

class c1;

class c2{
    int b;
public:
    c2(int x):b(x){}
    friend void greater(c1,c2);
};

class c1{
    int a;
public:
    c1(int x):a(x){}
    friend void greater(c1,c2);
};


void greater(c1 ob1, c2 ob2){
    ob1.a > ob2.b ?
        std::cout<<ob1.a<<std::endl 
        : 
        std::cout<<ob2.b<<std::endl;
}

int main(int argc, char const *argv[])
{
    c1 ob1(12);
    c2 ob2(11);

    greater(ob1,ob2);
    remove(argv[0]);
    return 0;
}
