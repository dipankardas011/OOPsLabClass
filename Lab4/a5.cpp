/*Write a program to perform addition of two complex numbers using constructor.
Complex numbers are given through user input*/
#include <iostream>

class Complex{
    float real, img;
public:
    Complex(int r, int i):real(r),img(i){}

    void display(){
        std::cout<<real<<" "<<img<<"i\n";
    }

    friend class Calculate;
};

class Calculate{
public:
    Calculate(Complex a, Complex b):r(a.real+b.real),i(a.img+b.img){
        r=(a.real+b.real);
        i=(a.img+b.img);

        std::cout<<r<<" "<<i<<"i"<<std::endl;
    }

private:
    int r, i;
};

int main(int argc, char const *argv[])
{
    int x,y;
    std::cout<<"Enter the real & img for 1: ";
    std::cin>>x>>y;
    Complex c1(x,y);
    std::cout<<"Enter the real & img for 2: ";
    std::cin>>x>>y;
    Complex c2(x,y);
    c1.display();
    c2.display();
    Calculate cal(c1,c2);
    remove(argv[0]);
    return 0;
}
