/*WAP to find the area of a circle rectangle triangle with the help of function overloading*/
#include <iostream>
#include <cmath>
#define PI 3.1415
using std::cin;
using std::endl;
using std::cout;

float area(float radius){
    return PI * radius * radius;
}

float area(float length, float breadth){
    return length*breadth;
}

double area(float a, float b, float c){

    float S = (a+b+c)/2;
    return sqrt(S*(S-a)*(S-b)*(S-c));
}

int main(int argc, char** argv) {
    cout<<"Area of circle-> "<<area(9)<<endl;
    cout<<"Area of Rectangle-> "<<area(9, 2)<<endl;
    cout<<"Area of triangle-> "<<area(4, 4 , 6)<<endl;
    remove(argv[0]);
    return EXIT_SUCCESS;
}