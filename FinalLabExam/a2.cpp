/**/
#include <iostream>
using namespace std;

template <class T>
class Array{
    T *arr;
    int size;

    public:
    Array(int n){
        size = n;
        arr = new T[size];
    }
    ~Array(){
        delete[] arr;
    }

    void input(){
        cout << "Enter the data" << endl;
        for (int i = 0; i < size;i++)
            cin >> arr[i];
    }
    void display(){
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << ' ';
        }
        cout << endl;
    }

    void sortit(){
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size-i-1; j++)
            {
                if(arr[j] > arr[j+1]){
                    T temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
};

int main(int argc, char** argv) {
    Array<int> ob1(5);
    ob1.input();
    ob1.sortit();
    ob1.display();

    Array<float> ob2(5);
    ob2.input();
    ob2.sortit();
    ob2.display();
    remove(argv[0]);
    return EXIT_SUCCESS;
}