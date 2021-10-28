/*WAP in C++ which will overload the unary – operator using a member function.*/
#include <iostream>
using std::cin;
using std::endl;
using std::cout;

class Operation{
public:
  int N;
  Operation(int n=0) : N(n){}

  void operator - (){
    N=-N;
  }
};

int main(int argc, char** argv) {
  Operation a(34);
  cout<<"Org: "<<a.N<<endl;
  -a;
  cout<<"new: "<<a.N<<endl;
  remove(argv[0]);
  return EXIT_SUCCESS;
}