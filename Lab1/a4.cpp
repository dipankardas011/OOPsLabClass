/*
+-----------------------+
| Dipankar Das 20051554 |
+-----------------------+
WAP in C++ to show the following two uses of scope resolution operator on variables.
    * To access the global and local variable
    * To define a function outside the class*/
#include <iostream>

class details{
public:
    details(){
        currid=++id;
    }

    void accept();

    void display(){
        printf("The details..\n");
        std::cout<<"curr id: "<<id<<std::endl;
        std::cout<<"str entered: "<<str<<std::endl;
    }

private:
    static int id;
    int currid;
    std::string str;
};

int details::id=0;

void details::accept()
{
    std::cout<<"enter any string... ";
    std::cin>>this->str;
}


int main(int argc, char const *argv[])
{
    details ob;

    ob.accept();
    ob.display();   

    details ob1;

    ob1.accept();
    ob1.display();   
   

    remove(argv[0]);
    return 0;
}
