/*Write a program to perform addition of two complex numbers using constructor overloading. The first constructor which takes no argument is used to create objects which are not initialized, second which takes one argument is used to initialize real and imaginary parts to equal values and third which takes two argument is used to initialize real and imaginary to two different values.*/
#include <iostream>

class Complex{
    float real, img;
public:
    Complex():real(0),img(0){}

    Complex(int x):real(x),img(x){}

    Complex(int r, int i):real(r),img(i){}

    Complex(Complex& c, Complex& d){
        real=d.real+c.real;
        img+=d.img+c.img;
    }

    void display(){
        std::cout<<real<<" "<<img<<"i\n";
    }


};


int main(int argc, char const *argv[])
{
    int x,y;
    std::cout<<"Enter the real & img for 1: ";
    std::cin>>x>>y;
    Complex c1(x,y);
    std::cout<<"Enter the real & img whihch are equal for 2: ";
    std::cin>>x;
    Complex c2(x);
    c1.display();
    c2.display();
    Complex c3(c1,c2);
    c3.display();
    remove(argv[0]);
    return 0;
}
