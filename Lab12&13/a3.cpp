/*WAP to demonstrate invoking function that Generates Exception */
#include <iostream>
using namespace std;

class Error {
public:
  void what() {
    cerr << "Both a and b are not > 0" << endl;
  }
};

class Numbers {
  int a, b;
public:
  Numbers(int a, int b) :a(a), b(b) {
    // all are positive
    if (this->a <= 0 || this->b <= 0) {
      throw Error();
    }
  }

  void showData() {
    cout << a << ", " << b << endl;
  }
};

int main(int argc, char** argv) {
  try {
    int a, b;
    cout << "Enter the values of a, b: ";
    cin >> a >> b;
    Numbers num(a, b);
    num.showData();
  }
  catch (Error e) {
    e.what();
  }
  remove(argv[0]);
  return EXIT_SUCCESS;
}