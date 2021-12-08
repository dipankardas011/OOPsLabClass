/**/
#include <iostream>
using namespace std;

class Number{
    int a, b;
    public:
    Number(int x, int y):a(x),b(y){}

    void display(){
        cout << "a: " << a << " b: " << b << endl;
    }

    friend void addition(Number &);
};

void addition(Number& ob){
    int k = ob.a + ob.b;
    cout << "Sum: " << k << endl;
}

int main(int argc, char** argv) {
    cout << "Enter the value of a, b: ";
    int a, b;
    cin >> a >> b;
    Number num(a, b);
    num.display();
    addition(num);
    remove(argv[0]);
    return EXIT_SUCCESS;
}