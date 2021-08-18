/*WAP in C++ which will show the use of default argument in a function.*/
#include <iostream>

void sum(int a, int b=1, int c=2, int d=3){
    std::cout<<(a+b+c+d)<<std::endl;
}

int main(int argc, char const *argv[])
{
    sum(12);
    sum(1,2,3,4);
    sum(12,3);
    remove(argv[0]);
    return 0;
}
