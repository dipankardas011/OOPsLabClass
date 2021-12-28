#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cassert>
/**
 * every void exec() is main function inside the namespace;
 */

/**
 * @def WAP to declare static objects and siaplay its contents
 */
namespace Q1{

    class Demo{
        int number;
        public:
        Demo(int n):number(n){}

        void display() { std::cout << "number: " << number << std::endl; }
    };

    int exec()
    {
        static Demo ob(5);
        // Demo ob = 5;
        ob.display();

        return 0;
    }
}
/**
 * @def WAP to declare 3 classes a1,a2,a3 the classes have provate data memeber var of string assign the first , surname to classes a1, a2 respectively 
 * class a3 will concaterate the 2 and store it and print it
 */
namespace Q2{
    class a1;
    class a2;
    class a3;

    class a1{
        std::string first;
        public:
        a1(std::string n):first(n){}

        std::string getFirst() { return first; }
    };

    class a2{
        std::string surname;
        public:
        a2(std::string n):surname(n){}

        std::string getLast() { return surname; }
    };

    class a3 : protected a1,a2{
        std::string name;
        public:
        a3(std::string f, std::string l):a1(f),a2(l){}

        void conc(){
            name = getFirst() + " " + getLast();
        }

        void printIt(){
            std::cout << "Name: " << name << std::endl;
        }
    };

    int exec(){
        a3 obj("Dipankar", "Das");
        obj.conc();
        obj.printIt();
        return 0;
    }
}

/**
 * @def read all conetents of a file from beg and print them to the o/p
 */
namespace Q3{
    int exec(){
        std::fstream FILE;
        FILE.open("file1.txt", std::ios::in);

        assert(FILE);
        char ch;
        while (!FILE.get(ch).eof()){
            std::cout << ch;
        }
        std::cout<<std::endl;

        return 0;
    }
}

/**
 * @def output
 */
namespace Q4{
    int exec(){
        int a = 2;
        int &b = a;
        int c = 20;
        b = c;
        std::cout << a << std::endl
                  << b << std::endl;
        c = 2;
        std::cout << a << std::endl
                  << b << std::endl;
        return 0;
    }
}

/**
 * @def to cal factorial using constructor recursively
 */
namespace Q5{
    class Factorial{
        public:
        int N;
        Factorial(int N):N(N){}
        size_t factorial(Factorial &obj) {

            if (obj.N <= 1)
                return obj.N;
            Factorial temp = Factorial(obj.N - 1);

            return obj.N * factorial(temp);
        }
    };


    int exec(){
        std::cout << "Enter the number for factorial: ";
        int n;
        std::cin>>n;
        Factorial fact(n);
        std::cout << "Factorial(" << n << ")= " << fact.factorial(fact) << std::endl;
        return 0;
    }
}

/**
 * @def wap to enter the mobile number 
 * [X] it must have the country code(+91 like) in the begin
 * [X] the total digits must be exactly 10 excluding the counrty code
 * [X] the first digit after the country code must be not zero
 */

namespace Q6{
    int exec(){
        std::string mobileNo;
        std::cout << "Enter Mobile number: ";
        std::cin >> mobileNo;
        try{
            // assuming only 2 digits of code like +99
            if(mobileNo.at(0) == '+'){
                mobileNo = mobileNo.substr(3);
                if(mobileNo.length()!=10)
                    throw -1;

                if(mobileNo.at(0) == '0')
                    throw -1;
                std::cout << "Valid mobile number" << std::endl;
            }
            else
            {
                throw -1;
            }
        } catch (int n){
            std::cout << "^~~~ Invalid mobile number!!\n";
        }
        return 0;
    }
}

/**
 * @def with small code how to stop a class from being instantiated
 */
namespace Q7{
    class Demo{
        int a;
        Demo(){}

        public:
        int getData(){
            return a;
        }
    };
    int exec()
    {
        // Demo a;
        // will give inaccessible
        return 0;
    }
}

int main(int argc, char** argv) {
    Q1::exec();
    Q2::exec();
    Q3::exec();
    Q4::exec();
    Q5::exec();
    Q6::exec();
    remove(argv[0]);
    return EXIT_SUCCESS;
}