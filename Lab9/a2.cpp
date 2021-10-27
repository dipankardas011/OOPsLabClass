/*Create a class Acount which stores account number, customer name and balance. Derive two classes from ‘Account’ class: ‘Savings’ and ‘Current’. The ‘Savings’ class stores minimum balance. The ‘Current’ class stores the over-due amount. Include member functions in the appropriate class for
-deposit money
-withdraw [For saving account minimum balance should be checked.]
[For current account overdue amount should be calculated.]
-display balance Display data from each class using virtual function.*/
#include <iostream>
#include <string>
using namespace std;

class Account {
  string name;
  long accNo;
protected:
  float balance;
public:
  Account(string n, long acc, float bal) : name(n),accNo(acc),balance(bal){}

  virtual void deposit(float newB) =0;
  virtual void withdraw(float request) = 0;


  virtual void display(){
    cout<<"\tname: "<<name<<endl;
    cout<<"\tAccNo: "<<accNo<<endl;
    cout<<"\tBalance: "<<balance<<endl;
  }
};

class Savings : public Account{
public:
  Savings(string n, long a, float b):Account(n,a,b){}

  void deposit(float newB){
    balance += newB;
  }

  void withdraw(float a) {
    if(a > balance){
      cerr<<"\"Insufficient\""<<endl;
      return;
    }
    balance -= a;
    cout<<"Withdrawn: "<<a<<endl;
  }

  void display() {
    cout<<"##Savings\n";
    Account::display();
  }
};

class Current : public Account{
public:
  Current(string n, long a, float b):Account(n,a,b){}

  void deposit(float newB){// reduction of overdue
    balance -= newB;
  }

  void withdraw(float a) {
    float overDue=0.0f;
    // if (a > balance)
      // overDue = a+balance;
      balance = balance + a;// like credit system the loan increases
    cout<<"\"Overdue\": "<<balance<<endl;
  }

  void display() {
    cout<<"##Current\n";
    Account::display();
  }
};

int main(int argc, char** argv) {
  Account *acc = nullptr;
  acc = new Savings("Save123",2345365633,4435.89);
  acc->display();
  acc->deposit(2343);
  acc->withdraw(50000);
  acc->display();

  cout<<"================\n";
  delete acc;
  acc = new Current("Curr",4242525424,500);
  acc->display();
  acc->deposit(54);
  acc->withdraw(10100);
  acc->display();

  delete acc;

  remove(argv[0]);
  return EXIT_SUCCESS;
}