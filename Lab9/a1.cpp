/*Create a class which stores employee name, id and salary Derive two classes from
‘Employee’ class: ‘Regular’ and ‘Part-Time’. The ‘Regular’ class stores DA, HRA and
basic salary. The ‘Part-Time’ class stores the number of hours and pay per hour.
Calculate the salary of a regular employee and a part-time – use the concept of
virtual function
    Gross Salary = Basic Salary + DA + HRA
    DA = 80% of Basic Salary
    HRA = 10% of Basic Salary*/
#include <iostream>
#include <string.h>
using namespace std;

class Employee {
private:
  string name;
  int id;
protected:
  int salary;
public:
  Employee(string n, int i, int s) : name(n), id(i), salary(s) {}

  void display() {
    cout<<"\tName: "<<name<<endl;
    cout<<"\tId: "<<id<<endl;
    cout<<"\tSalary: "<<salary<<endl;
  }

  virtual void calculateSalary() = 0;
};

class Regular : public Employee {
  float DA, HRA, GSal;
public:
  Regular(string n, int i, int sal) : Employee(n,i,sal){
    DA = HRA = 0.0f;
    GSal = 0;
  }

  void calculateSalary() {
    DA = 0.8 * salary;
    HRA = 0.1 * salary;
    GSal = DA + HRA + salary;
    cout<<"\nRegular\n";
    display();
    cout<<"\tDA: "<<DA<<endl;
    cout<<"\tHRA: "<<HRA<<endl;
    cout<<"\tGrossSalary: "<<GSal<<endl;
  }
};

class PartTime : public Employee {
  int time;
  float salPerTime;
public:
  PartTime(string n, int i, int t, float P) : Employee(n,i,0){
    time=t;
    salPerTime=P;
  }

  void calculateSalary() {
    cout<<"\nPartime\n";
    salary = time * salPerTime;
    display();
  }
};

int main(int argc, char** argv) {
  Regular a("xyz",2341,30000);
  a.calculateSalary();

  PartTime b("ABC",3244,10,20.5);
  b.calculateSalary();
  remove(argv[0]);
  return EXIT_SUCCESS;
}