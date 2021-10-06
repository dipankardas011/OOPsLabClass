/*WAP to count the number of objects created using static data member*/
#include <iostream>
using std::cin;
using std::endl;
using std::cout;

class Abc{
    static int id;
public:
    Abc(){
        id++;
        dis();
    }
    void dis(){
        cout<<"object number: "<<id<<endl;
    }
};

int Abc::id;

int main(int argc, char** argv) {
    Abc a;
    Abc b;
    Abc c;
    
    remove(argv[0]);
    return EXIT_SUCCESS;
}