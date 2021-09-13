/*WAP in C++ depicting the use of multiple inheritance. (No ambiguity)*/
#include <iostream>

class A{
public:
    void display(){
        std::cout<<"I am class 'A'\n";
    }
};

class B{
public:
    void display(){
        std::cout<<"I am class 'B'\n";
    }
};

class C : public A, public B{
public:
    void display(){
        A::display();
        B::display();
        std::cout<<"I am class 'C'\n";
    }
};

int main(int argc, char const *argv[])
{
    C ob;
    ob.display();
    remove(argv[0]);
    return 0;
}
