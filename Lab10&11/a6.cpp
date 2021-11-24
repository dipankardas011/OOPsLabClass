/*WAP in C++ which will overload new and delete operator.*/
#include <iostream>
using namespace std;


class Arrays {
private:
    int *arr;
public:
    void* operator new(size_t size) {
        void* temp = ::operator new(size); // class memory allocation is done as well as the arr so class get the memory of 8 which is the sizeof if pointer and then we allocate memory to the 
        return temp;
    }

    void inputData(size_t N) {
        arr = new int[N];
        for (int i = 0; i < N; i++)
            arr[i] = i+1;
    }

    void operator delete(void* p) {
        ::delete p;
    }
    void display(size_t N) {
        // pointer is 8 bytes so 2 integer size of the class so size = 2
        // so arr will only contain 2
        // int len = sizeof(obj->arr) / sizeof(int);
        // so if the array is in stack memory so the class size = 4*5 = 20 bytes
        // cout << "Class size: " << sizeof(obj) << endl;
        printf("[");
        int i = 0;
        do {
            cout << arr[i];
            i++;
        } while (i < N && printf(", "));
        cout << "]" << endl;
    }
};

int main(int argc, char** argv) {
    printf("Enter the size of the array: ");
    size_t N = 0;
    cin >> N;
    Arrays* arr = new Arrays;
    arr->inputData(N);
    arr->display(N);

    delete arr;
    remove(argv[0]);
    return EXIT_SUCCESS;
}