/*WAP in C++ which will implement the concept of Parameterized constructor with
implicit and explicit call.*/
#include <iostream>

class Hello{
    int a;
public:
    Hello(int x):a(x){}
    void display(){
        std::cout<<a<<std::endl;
    }
};

int main(int argc, char const *argv[])
{
    Hello a1(23);
    a1.display();
    Hello a2 = Hello(23);
    a2.display();
    remove(argv[0]);
    return 0;
}
