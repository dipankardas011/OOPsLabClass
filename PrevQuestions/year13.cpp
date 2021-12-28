#include <iostream>
#include <string>

/**
 * @def you are required to implement a simple sol for xyz bank with the following
 * implement a class account
 *   balance, f() => add withdraw and currBalance
 *   pass a value into constructor to set an initial balance 
 *   if no value is passed initial = 0
 *   charge $100 fine if an attempt is made to withdraw more money
 * then available
 * 
 * enhance the class to compute intrest on the current balance. {annual intrest}
 * create 2 account objects of type saving and current and store them in an array
 * depending upon the user input perform the withdraw deposit balance check on the 2 array of objects and display
 */

namespace Q1{
   enum AccType
   {
      Savings,
      Current
   };

   class Account{
      int balance;
      std::string name;
      long accNo;
      AccType type;

      public:
         Account(std::string n, long acc, AccType ty, int bal = 0) 
            : name(n), accNo(acc), type(ty), balance(bal) {}

         void currBalance(){
            std::cout<<"Balance "<<balance<<std::endl;
         }

         void withdraw(int n){
            if(balance < n){
               balance -= 100;
               fprintf(stderr, "Withdrawn Unsuccessfull X Insufficient Bal\nFINE OF $100 is IMPOSED\n");
            }
            else
            {
               balance -= n;
            }
         }

         void deposit(int amt){
            balance += amt;
         }

         void displayInfo(){
            std::cout << "Account Number:\t" << accNo << std::endl;
            std::cout << "\tName:\t\t" << name << std::endl;
            std::cout << "\tAccount Type: " << type << std::endl;
            std::cout << "\tAccount Balance: " << balance << std::endl;
            printf("\n");
         }

         void calIntrest(){
            int P = balance;
            const float R = 4.5f;
            const int T = 5;//5 years
            // simple intrest
            float res = P * R * T / 100.0f;
            std::cout << "Simple intrest: " << res << std::endl;
         }
   };

   int exec()
   {
      Account acc1("Name 1", 2343543534, Savings);
      Account acc2("Name 2", 3453453322, Current,100);
      Account arr[] = {acc1, acc2};

      arr[0].displayInfo();
      arr[0].deposit(353);
      arr[0].withdraw(234);
      arr[0].currBalance();
      arr[0].calIntrest();
      arr[0].withdraw(100);
      arr[0].displayInfo();

      arr[1].displayInfo();
      arr[1].deposit(32);
      arr[1].calIntrest();
      arr[1].withdraw(435);
      arr[1].displayInfo();
      return 0;
   }
}

int main(int argc, char** argv) {
   Q1::exec();
   remove(argv[0]);
   return EXIT_SUCCESS;
}