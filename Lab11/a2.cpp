/*throw array out of bound exception*/
#include <iostream>
using namespace std;

class Arrays {
private:
    int* arr;
    int size;
public:
    Arrays(int n) {
        this->arr = new int[n];
        this->size = n;
    }

    void input() {
        cout << "Enter the elements: ";
        for (size_t i = 0; i < size; i++)
            cin >> arr[i];        
    }

    void display() {
        for (int i = 0;i < size;i++)
            cout << arr[i] << ' ';
        cout << endl;
    }
    class what {};

    int& operator[](int indx) {
        if (indx < 0 || indx >= size) {
            throw what();
        }
        return arr[indx];
    }
};

int main(int argc, char** argv) {
    Arrays obj(5);
    obj.input();
    obj.display();
    try {
        obj[5] = 34;
        obj.display();

        obj[6] = -1;
        obj.display();
    }
    catch (Arrays::what) {
        cerr << "^~~~~ ArrayIndexOutOfBoundException" << endl;
    }
    remove(argv[0]);
    return EXIT_SUCCESS;
}