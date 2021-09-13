/*(Single Inheritance) Write a program to create a class CIRCLE with one field as radius, used to calculate the area of a Circle. Create another class RECTANGLE used to calculate the area of the rectangle which is a subclass of CIRCLE class. Use the concept of single inheritance such that the radius of circle class can be re-used as length in rectangle class. Take necessary data members and member functions for both the classes to solve this problem. All the data members are initialized through the constructors. Show the result by accessing the area method of both the classes through the objects of rectangle class.*/
#include <iostream>
#define PI 3.1415

class Circle{
public:
    int radius;
    Circle(int r):radius(r){}

    void Area(){
        std::cout<<"Circle Area: "<<(PI * radius * radius)<<std::endl;
    }
};

class Rectangle : public Circle{
    int len, width;
public:
    Rectangle(int k):Circle(k){
        Area();
        len = k;
        std::cout<<"Enter the width: ";
        std::cin>>width;
    }
    void AreaR(){
        std::cout<<"Rectangle Area: "<<(len*width)<<std::endl;
    }
};

int main(int argc, char** argv){
    std::cout<<"enter the radius: ";
    int r;
    std::cin>>r;
    Rectangle rec(r);
    rec.AreaR();
    remove(argv[0]);
    return EXIT_SUCCESS;
}