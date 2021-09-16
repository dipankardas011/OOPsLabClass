/*wap a cpp program to find out volume of a sphere, cylinder and cuboid using function overloading*/
#include <iostream>
#define PI 3.1415

void volume(float radius){
    std::cout<<"Volume of Sphere: "<<((4.0/3.0)*PI*radius*radius*radius)<<"\n";
}

void volume(float length, float radius){
    std::cout<<"Volume of Cylinder: "<<(PI*radius*radius*length)<<"\n";
}

void volume(float a, float b, float c){
    std::cout<<"Volume of Cuboid: "<<(a*b*c)<<"\n";
}

int main(int argc, char const *argv[])
{
    float r = 3.5;
    volume(r);
    float length = 50;
    volume(length, r);
    float a = 23,
        b = 3,
        c = 50;
    volume(a,b,c);
    remove(argv[0]);
    return 0;
}
