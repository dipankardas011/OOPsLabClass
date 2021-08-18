/*WAP in C++ which will swap the value of 2 variable by using call by reference – (a) using
alieas (b) using Pointer*/
#include <iostream>

void swapR(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

void swapP(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main(int argc, char const *argv[])
{
    printf("enter a and b\n");
    int a, b;
    int c, d;
    std::cin >> a >> b;
    c = a;
    d = b;
    swapR(a, b);
    std::cout << "a: " << a << "\tb: " << b << std::endl;

    swapP(&c, &d);
    std::cout << "a: " << c << "\tb: " << d << std::endl;

    remove(argv[0]);
    return 0;
}
