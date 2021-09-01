/*1. WAP in C++ which will display implementation on dynamic constructor.
2. WAP in C++ which will implements destructor. Show the number of object created and
destroyed. Also show the use of new and delete operator.*/
#include <iostream>

class constr{
public:
    constr(){}

    constr(int l):a(l){}

    int dis(){
        return a;
    }

private:
    int a;
};

int main(int argc, char const *argv[])
{
    int n;
    std::cout<<"enter the size. ";
    std::cin>>n;
    constr *c=new constr[n];

    for(int i=0;i<n;i++){
        int k;
        std::cin>>k;
        c[i] = constr(k);
    }
    for(int i=0;i<n;i++){
        std::cout<<c[i].dis()<<std::endl;
    }
    delete(c);
    return 0;
}
