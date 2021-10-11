/*Create a class Shape derive classes named "Dimension2" and "Dimension3" from "Shape" class.

derive 2 classes namely "rectangle" and "circle" from class "dimension2" 

derive 2 classes namely "cylinder" and "sphere" from class "Dimensio3" 

include the data members and function in the revelant classes to find area of a rectangle and a circle also surface area and volume of a cylinder and a sphere
    area of rectangle = l*b        area circle = pi * r^2

    volume of cylinder = pi * r^2 * h      volume of sphere = 4/3 * pi * r^3
    surface area of cylinder= 2pi * rh      Surfece area of sphere = 4pi r^2
*/


#include <iostream>
using std::cin;
using std::endl;
using std::cout;

class Shape{
public:
    const double PI = 3.14159;
};
class Dimension2 : public Shape{
public:
    virtual void Area(double=-1, double=-1) = 0;
};

class Dimension3 : public Shape{
public:
    virtual void SurfaceArea(double=-1, double=-1) = 0;
    virtual void Volume(double=-1, double=-1) = 0;
};

class Rectangle : public Dimension2{
public:
    void Area(double l=1, double b=1) {
        cout<<"Rectangle Area: "<<l*b<<endl;
    }
};

class Circle : public Dimension2{
public:
    void Area(double r=1, double x=0){
        cout<<"Circle Area: "<<PI*r*r<<endl;
    }
};

class Cylinder : public Dimension3{
public:
    void SurfaceArea(double r=1, double h=1){
        cout<<"Cylinder Surface Area: "<<2*PI*r*h + 2*PI*r*r<<endl;
    }

    void Volume(double r=1, double h=1){
        cout<<"Cylinder Volume: "<<PI*r*r*h<<endl;
    }
};

class Sphere : public Dimension3{
public:
    void SurfaceArea(double r=1, double h=0){
        //4pi r^2
        cout<<"Sphere Surface Area: "<<4*PI*r*r<<endl;
    }

    void Volume(double r=1, double h=0){
        //4/3 * pi * r^3
        cout<<"Sphere Volume: "<<(4.0/3.0)*PI*r*r*r<<endl;
    }
};

int main(int argc, char** argv) {
    Rectangle rec;
    Circle cir;
    Cylinder cyl;
    Sphere sph;

    rec.Area(2,4);
    cir.Area(4);

    cyl.SurfaceArea(2,5.5);
    cyl.Volume(5.7);

    sph.SurfaceArea(23.5);
    sph.Volume(34.5);
    remove(argv[0]);
    return EXIT_SUCCESS;
}