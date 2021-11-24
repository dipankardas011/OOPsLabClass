/*WAP in C++ which will overload the Binary Operator (+) where the program will add two
Array, store in the resultant array and display the same using member function.*/
#include <iostream>
using namespace std;

class Addition {
public:
    int *arr;
    int size;

    Addition(int S) : size(S) {
        arr = new int[size];
    }
    ~Addition() {
        delete[] arr;
    }

    void inputData() {
        printf("Enter the elements: ");
        for (int i=0; i<size; i++)
            cin >> arr[i];
    }

    Addition operator + (Addition& obj) {
        Addition ans(obj.size);
        for (int i=0; i<obj.size; i++) {
            ans.arr[i] = obj.arr[i] + this->arr[i];
        }
        return ans;
    }

    void display() {
        printf("[ ");
        for(int i=0; i<size; i++) {
            cout << arr[i] <<' ';
        }
        printf("]\n");
    }
};


int main(int argc, char** argv) {
    Addition arr1(5);
    arr1.inputData();

    Addition arr2(5);
    arr2.inputData();

    arr1.display();
    arr2.display();

    printf("Sum: ");
    Addition res = arr1 + arr2;

    res.display();


    remove(argv[0]);
    return EXIT_SUCCESS;
}