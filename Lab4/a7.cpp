/*Write a program to generate a fibonacci series using copy constructor.*/
#include <iostream>

class Fabonacci{
public:
    Fabonacci():a(0),b(1){}
    Fabonacci(Fabonacci& f){
        int t=f.a+f.b;
        this->a = f.b;
        this->b = t;

        std::cout<<t<<" ";
    }
    void operator=(Fabonacci& copy){
        this->a=copy.a;
        this->b=copy.b;
    }
    void display(){
        std::cout<<a<<" "<<b<<" ";
    }
    
private:
    int a,b;
};

int main(int argc, char const *argv[])
{
    int n;
    std::cout<<"enter the number of terms for fabonacci series: ";
    std::cin>>n;
    std::cin.ignore();
    n-=2;//2 are created
    Fabonacci start;
    start.display();

    while(n-- > 0){
        Fabonacci cpy(start);
        start=cpy;
    }
    remove(argv[0]);
    return 0;
}
