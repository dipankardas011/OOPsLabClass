/*WAP in C++ which will swap the value of 2 variable by using call by value.*/
#include <iostream>

void swap(int a, int b){
    int t=a;
    a=b;
    b=t;
    printf("a-> %d\tb-> %d\n",a,b);
}

int main(int argc, char const *argv[])
{
    printf("enter a and b\n");
    int a,b;
    std::cin>>a>>b;
    swap(a,b);
    remove(argv[0]);
    return 0;
}
