/*Create a class shape. Derive two classes from it; Circle and Square. Find the area of each shape and display it. Shape class should be abstract base class. Use the concept of pure virtual function.*/
#include <iostream>
#define PI 3.1415
using std::cin;
using std::endl;
using std::cout;

class Shape {
public:
  virtual void Area (float a) = 0;
};

class Circle : public Shape{
public:
  void Area(float a) {
    cout<<"Area of Circle: "<<PI*a*a<<endl;
  }
};

class Square : public Shape{
public:
  void Area(float a) {
    cout<<"Area of Square: "<<a*a<<endl;
  }
};

int main(int argc, char** argv) {
  Circle cir;
  Square sq;

  cir.Area(4);
  sq.Area(3);
  remove(argv[0]);
  return EXIT_SUCCESS;
}