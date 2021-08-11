/*WAP in C++ to demonstrate the implicit and explicit typecasting. Different types of
type conversion.*/
#include <iostream>

int main(int argc, char const *argv[])
{
    int a;
    std::cout<<"Enter the double ";
    std::cin>>a;
    std::cout<<"implicit under action "<<a<<std::endl;

    float avg = 345 / (float)54;
    std::cout<<"explicit under action average = "<<avg<<std::endl;
    remove(argv[0]);
    return 0;
}
