/*WAP in C++ depicting the use of multiple inheritance with ambiguity and resolve the same by (a) :: Scope Resolution Operator   (b) function overriding*/
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
    void display(){//function overriding
        A::display();//scope resolution
        B::display();
        std::cout<<"I am class 'C'\n";
    }
};

int main(int argc, char const *argv[])
{
    C ob;
    /***
     * @error => ambguity
     */
    ob.display();
    /*
     * line 20 we can us the function orriding
     * or call the individual function using scope resolution operator
     */
    remove(argv[0]);
    return 0;
}
