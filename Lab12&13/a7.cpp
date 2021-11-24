/*WAP to display data of two different types using function template with multiple arguments.*/
#include <iostream>
using namespace std;

template<class T>
void display(int n, T* arr) {
  cout << "[ ";
  int i = 0;
  do {
    cout << arr[i];
    i++;
  } while (i != n && printf(", "));
  cout << "]\n";
}

int main(int argc, char** argv) {
  int arr[] = { 3,1,5,6,7 };
  display(5, arr);

  float a[] = { 2.2,3.45,4.234,6.32,7.1 };
  display(5, a);
  remove(argv[0]);
  return EXIT_SUCCESS;
}