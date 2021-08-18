/*WAP in C++ where the program will find the maximum of 2 number entered by using inline
function.*/
#include <iostream>

inline int max(int a, int b){
    return a>b ? a:b;
}

int main(int argc, char const *argv[])
{
    int a, b;
    std::cout<<"Enter 2 var.. ";
    std::cin>>a>>b;
    std::cout<<"Max: "<<max(a,b)<<std::endl;
    remove(argv[0]);
    return 0;
}
