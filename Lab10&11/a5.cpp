/*WAP in C++ which overload the << and >> operator. (Hint: Date class Program)*/
#include <iostream>
using namespace std;

class Input {
private:
    int x; int y;

public:

    Input() {
        x = 0;
        y = 0;
    }
    friend istream& operator>>(istream& obj, Input& data) {
        obj>>data.x>>data.y;
        return obj;
    }
    
    friend ostream& operator<<(ostream& ob, Input& data) {
        ob << "(" << data.x << ", " << data.y << ")\n";
        return ob;
    }
};

int main(int argc, char** argv) {
    Input ob;
    cout<<"Input data of X, Y: ";
    cin>>ob;
    cout<<ob;
    remove(argv[0]);
    return EXIT_SUCCESS;
}