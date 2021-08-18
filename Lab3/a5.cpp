/*Find the area of a Square and Rectangle using the concept of function overloading*/
#include <iostream>

int cal(int a)
{
    return a * a;
}
int cal(int l, int b)
{
    return l * b;
}

int main(int argc, char const *argv[])
{
    std::cout<<"Enter:\n1->square area\n2->rectangle area"<<std::endl;
    int ch;
    std::cin>>ch;
    switch(ch)
    {
        case 1:{
            int a;
            printf("enter side length: ");
            std::cin>>a;
            std::cout<<"Area: "<<cal(a)<<std::endl;
        }break;

        case 2:{
            int l,b;
            printf("enter length breadth: ");
            std::cin>>l>>b;
            std::cout<<"Area: "<<cal(l,b)<<std::endl;
        }break;
        default: std::cerr<<"Error! wrong option\n";
    }
    remove(argv[0]);
    return 0;
}
