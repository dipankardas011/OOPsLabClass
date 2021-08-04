/*
+-----------------------+
| Dipankar Das 20051554 |
+-----------------------+
WAP in C++ to demonstrate the scope of a variable*/
#include <iostream>

using namespace std;
int glb;

void func(int a)
{
    static int count = 0;
    count++;
    cout << "Call number to the func(): " << count << endl;
    int local = a;
    cout << "local: " << local << endl;
    ::glb = a;
    return;
}

int main(int argc, char const *argv[])
{
    // defaault
    ::glb = 0;
    func(45);
    cout << "the global variable: " << ::glb << endl;

    /*accessing a local var causes err*/
    //local=45;

    func(45235);
    cout << "the global variable: " << ::glb << endl;

    func(2355);
    cout << "the global variable: " << ::glb << endl;

    func(3255);
    cout << "the global variable: " << ::glb << endl;


    int glb;//local var

    glb = 99999;
    cout << "the global variable: " << ::glb << endl;
    cout << "the local variable: " << glb << endl;
    remove(argv[0]);
    return 0;
}
