#include <iostream>
#include <string>
/**
 * @def xyz bank has requested you to create banking software for its customers the bank maintainers two kinds of accounts for customers
 * the bak maintainers 1 kinds of accounts for customers, saving and current account. the saving account provides compound intrest, 
 * withdrawal/deposit facility and check book facility. current account provides withdraw/deposit 
 * and check book facility but no intrest current account holders should maintain a minimum balance of RS 10000
 * WAP to create a class account that stores customer name, account number and account type from this derive 2 classes curr-act for current account
 * save-act for saving account include  necessary member function to accept required data through constructor and perform transactions and to check the balance
 */
namespace Q1{
   enum AccType
   {
      Savings,
      Current
   };

   class SaveAcc
   {
   };

   class CurrAcc{
   };

   class Account{
      std::string name;
      long accNo;
      AccType type;

      public:
      Account(){}


   };

   int exec()
   {
      return 0;
   }
}

int main(int argc, char** argv) {
   Q1::exec();
   remove(argv[0]);
   return EXIT_SUCCESS;
}