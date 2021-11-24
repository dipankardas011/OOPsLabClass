/*WAP in C++ which will overload the Binary Operator (+) where the program will add two
Complex Number, store in the result in third object and display the same using friend
function. Hint : friend function will have two arguments*/
#include <iostream>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    Complex(int r = 0, int i = 0) : real(r), img(i) {}

    void display()
    {
        cout << real << " " << img << "i\n";
    }

    friend Complex operator+(Complex&, Complex&);
};

Complex operator+(Complex& ob, Complex &obj)
{
    Complex res(0, 0);
    res.real = obj.real + ob.real;
    res.img = obj.img + ob.img;

    return res;
}


int main(int argc, char **argv) {
    Complex c1(5, 3);
    Complex c2(-12, 2);

    c1.display();
    c2.display();

    Complex res = c1 + c2;
    res.display();
    remove(argv[0]);
    return EXIT_SUCCESS;
}