/*WAP to find sort an integer array and a float array,
using function template.*/
#include <iostream>
#include <stdexcept>
using namespace std;

template<class T>
inline void swap(T& arr, int i, int j) {
  int t = arr[i];
  arr[i] = arr[j];
  arr[j] = t;
}

template<class T>
void inputData(T& arr, int size) {
  cout << "enter the data" << endl;
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
}

template<class T>
void display(T& arr, int size) {
  cout << "[ ";
  int i = 0;
  do {
    cout << arr[i];
    i++;
  } while (i != size && printf(", "));

  cout << "]\n";
}


template<class T>
void sortIt(T& arr, int size) {
  for (int i = 0;i < size;i++) {
    for (int j = 0;j < size - i - 1;j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr, j, j + 1);
      }
    }
  }
}


int main(int argc, char** argv) {
  int n;
  cout << "Enter the size of the arr: ";
  cin >> n;

  int* arr = new int[n];

  inputData(arr, n);
  sortIt(arr, n);
  display(arr, n);

  float* a = new float[n];

  inputData(a, n);
  sortIt(a, n);
  display(a, n);

  
  remove(argv[0]);
  return EXIT_SUCCESS;
}