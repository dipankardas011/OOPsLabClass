/*WAP in C++ which will demonstrate the use of alias operator*/
#include <iostream>

void swap(int& a, int& b){
    int t=a;
    a=b;
    b=t;
}

int main(int argc, char const *argv[])
{
    int a,b;    std::cin>>a>>b;
    std::cout<<"Before swwap: ("<<a<<", "<<b<<")"<<std::endl;
    swap(a,b);
    std::cout<<"After swwap: ("<<a<<", "<<b<<")"<<std::endl;
    remove(argv[0]);
    return 0;
}
