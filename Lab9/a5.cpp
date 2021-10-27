/*WAP in C++ which will overload the unary – operator using member function with returning an object.*/
#include <iostream>
using std::cin;
using std::endl;
using std::cout;

class Operation{
public:
  int N;
  Operation(int n=0) : N(n){}

  Operation operator - (){
    Operation obj;
    obj.N = -N;
    return obj;
  }
};

int main(int argc, char** argv) {
  Operation a(34),b;
  cout<<"Org: "<<a.N<<endl;
  b=-a;
  cout<<"New: "<<b.N<<endl;
  remove(argv[0]);
  return EXIT_SUCCESS;
}