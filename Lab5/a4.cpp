#include <iostream>
enum type
{
    Savings,
    Currrent
};
class Bank
{
    std::string name;
    u_long acc_no;
    type acc_type;
    double balance;

public:
    Bank(std::string n, u_long no, type m, double bal)
    {
        name = n;
        acc_no = no;
        acc_type = m;
        balance = bal;
    }
    void display()
    {
        std::cout << "name: " << name << std::endl;
        std::cout << "account no.: " << acc_no << std::endl;
        std::cout << "type: " << acc_type << std::endl;
        std::cout << "balance: " << balance << std::endl;
    }

    void deposit(double k)
    {
        balance += k;
        std::cout << "Deposited\n";
        std::cout<<"current balance: "<<balance<<std::endl;;
    }

    void withdraw(double w)
    {
        if (w > balance)
        {
            std::cout << "balance is insufficient\n";
            return;
        }
        balance -= w;
        std::cout << "Amount withdrawn: " << w << "\n left balance: " << balance << std::endl;
    }
};

int main(int argc, char const *argv[])
{
    Bank b("demo name", 23453443645, Savings, 2000.2);
    std::cout<<"-------------------------------------------\n";
    b.display();
    std::cout<<"-------------------------------------------\n";
    b.deposit(200);
    std::cout<<"-------------------------------------------\n";
    b.withdraw(10000);
    std::cout<<"-------------------------------------------\n";
    b.withdraw(300);

    remove(argv[0]);
    return 0;
}
