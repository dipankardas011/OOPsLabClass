/*Rewrite program 6 using class template*/
#include <iostream>
using namespace std;

template<class T>
class Arrays {
  T* arr;
  int size;

  inline void swap(int i, int j) {
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
  }
  
public:
  Arrays(int n) {
    this->size = n;
    arr = new T[n];
  }

  void inputData() {
    cout << "enter the data" << endl;
    for (size_t i = 0; i < size; i++) {
      cin >> arr[i];
    }
  }

  void display() {
    cout << "[ ";
    int i = 0;
    do {
      cout << arr[i];
      i++;
    } while (i != size && printf(", "));

    cout << "]\n";
  }

  

  void sortIt() {
    for (int i = 0;i < size;i++) {
      for (int j = 0;j < size - i-1;j++) {
        if (arr[j] > arr[j + 1]) {
          swap(j, j + 1);
        }
      }
    }
  }


  ~Arrays() {
    delete[] arr;
  }
};


int main(int argc, char** argv) {
  int n;
  cout << "Enter the size of the arr: ";
  cin >> n;
  Arrays <int>obj(n);

  obj.inputData();
  obj.sortIt();
  obj.display();

  Arrays <float>obj1(n);
  obj1.inputData();
  obj1.sortIt();
  obj1.display();
  remove(argv[0]);
  return EXIT_SUCCESS;
}