/*Write a program to find out the area of a rectangle through friend function and member
function separately of Rectangle class.*/
#include <iostream>

class Rectangle
{
    int l, b;

public:
    Rectangle(int le, int be) : l(le), b(be) {}

    friend int area(Rectangle);

    void display()
    {
        std::cout << "len= " << l << " breadth= " << b << std::endl;
    }
};

int area(Rectangle r)
{
    return r.l * r.b;
}

int main(int argc, char const *argv[])
{
    Rectangle o(12, 3);
    o.display();
    std::cout << area(o);
    remove(argv[0]);
    return 0;
}
