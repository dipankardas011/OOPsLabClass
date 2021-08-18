/*WAP in C++ which will illustrate the use of static function.*/
#include <iostream>

class Function{
public:
    static void display(){
        std::cout<<"In static member function\n";
    }
    void dis(){
        std::cout<<"inside member function\n";
    }
};

int main(int argc, char const *argv[])
{
    Function::display();
    Function ob;
    ob.dis();
    remove(argv[0]);
    return 0;
}
