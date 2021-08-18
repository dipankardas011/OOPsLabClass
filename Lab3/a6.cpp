/*WAP to find volume of a sphere, a cylinder and a cuboid, using function overloading.*/
#include <iostream>

#define PI 3.14159

float cal(float a)
{
    return (4.0/3.0)*PI*a*a*a;
}
float cal(float r, float h)
{
    return PI*r*r*h;
}

float cal(float l, float b, float h){
    return l*b*h;
}

int main(int argc, char const *argv[])
{
    std::cout<<"Enter:\n1->Sphere volume\n2->Cylinder volume\n3->Cuboid volume"<<std::endl;
    int ch;
    std::cin>>ch;
    switch(ch)
    {
        case 1:{
            float a;
            printf("enter radius: ");
            std::cin>>a;
            std::cout<<"Volume: "<<cal(a)<<std::endl;
        }break;

        case 2:{
            float l,h;
            printf("enter radius height: ");
            std::cin>>l>>h;
            std::cout<<"Volume: "<<cal(l,h)<<std::endl;
        }break;

        case 3:{
            float l,b,h;
            printf("enter length breadth height: ");
            std::cin>>l>>b>>h;
            std::cout<<"Volume: "<<cal(l,b,h)<<std::endl;
        }break;
        default: std::cerr<<"Error! wrong option\n";
    }
    remove(argv[0]);
    return 0;
}
