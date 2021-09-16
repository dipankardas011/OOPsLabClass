/*inline function*/
#include <iostream>

inline int multiply(int a, int b){
    return a*b;
}

int main(int argc, char const *argv[])
{
    std::cout<<"Multiply: "<<multiply(23,54)<<std::endl;
    std::cout<<"Multiply: "<<multiply(23,4)<<std::endl;
    remove(argv[0]);
    return 0;
}
