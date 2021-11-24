/*Rewrite program 7 using class template*/
#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

template<class T>
class Array {
public:
  void display(int n, T* arr) {
    cout << "[ ";
    int i = 0;
    do {
      cout << arr[i];
      i++;
    } while (i != n && printf(", "));
    cout << "]\n";
  }
};

int main(int argc, char** argv) {
  int arr[] = { 3,1,5,6,7 };
  Array <int>obj;
  obj.display(5, arr);

  float a[] = { 2.2,3.45,4.234,6.32,7.1 };
  Array <float>obj1;
  obj1.display(5, a);
  remove(argv[0]);
  return EXIT_SUCCESS;
}