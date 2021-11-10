/*WAP in C++ which will overload = (assignment operator).*/
#include <iostream>
using namespace std;

class Line {
    int x, y;
public:
    Line(int X = 0, int Y = 0) : x(X), y(Y) {}

    void display() {
        cout << "coordinates: (" << x << ", " << y << ")" << endl;
    }

    void operator= (Line RHS) {
        this->x = RHS.x;
        this->y = RHS.y;
    }
};

int main(int argc, char** argv) {
    Line l1(3, 4);
    Line l2(4, 5);
    Line l3;
    l1.display();
    l2.display();
    l3 = l2;
    l3.display();
    remove(argv[0]);
    return EXIT_SUCCESS;
}