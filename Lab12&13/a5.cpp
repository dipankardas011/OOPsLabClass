/*WAP to demonstrate the concept of re-throwing the exception*/
#include <iostream>
using namespace std;


class Error {
public:
  void what() {
    cerr << "Number must be +ve" << endl;
  }
};

class Rethrow {
  int a;
  size_t factorial(int n) {

    if (n < 1) {
      throw Error();
    }

    if (n <= 2) {
      return n;
    }
    return n * factorial(n - 1);
  }
public:
  Rethrow() {
    cout << "Enter the value between 1-100" << endl;
    cin >> a;
  }

  void findFactorial() {
    size_t res;
    try {
      res = factorial(this->a);
      cout << "Factoraial (" << this->a << "): " << res << endl;
    }
    catch (Error e) {
      throw;
    }
    
  }
};


int main(int argc, char** argv) {
  Rethrow f;

  try {
    f.findFactorial();
  }
  catch (Error e) {
    e.what();
  }
  catch (...) {
    cerr << "Abnormal Situation" << endl;
  }

  remove(argv[0]);
  return EXIT_SUCCESS;
}