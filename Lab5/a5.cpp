#include <iostream>


class Fraction{
private: 
    int num,deno;

public:
    Fraction(int n,int d):num(n),deno(d){}

    friend void add(Fraction a, Fraction b);

    friend void mul(Fraction a, Fraction b);

    friend void sub(Fraction a, Fraction b);

};

void display(int n, int d){
    std::cout<<n<<"/"<<d<<std::endl;
}

void add(Fraction a, Fraction b){
    int n = a.num * b.deno + a.deno*b.num;
    int d = a.deno*b.deno;
    display(n,d);
}

void mul(Fraction a, Fraction b){
    int n = a.num*b.num;
    int d=a.deno*b.deno;
    display(n,d);
}

void sub(Fraction a, Fraction b){
    int n = a.num * b.deno - a.deno*b.num;
    int d = a.deno*b.deno;
    display(n,d);
}

int main(int argc, char const *argv[])
{
    Fraction f1(3,5);
    Fraction f2(4,9);
    printf("addition\n");
    add(f1,f2);
    printf("subtraction\n");
    sub(f1,f2);
    printf("multiply\n");
    mul(f1,f2);

    remove(argv[0]);
    return 0;
}
