/*
+-----------------------+
| Dipankar Das 20051554 |
+-----------------------+
WAP in C++ to create a class which stores the name, ID, age and basic salary of an employee. Input data for ‘n’ number of employees. Calculate the gross salary of all the employees and display it along with the other details in tabular form.
    Gross Salary = Basic Salary + DA + HRA
    DA = 80% of Basic Salary
    HRA = 10% of Basic Salary*/
#include <iostream>
#include <string>

using namespace std;

class Employee{

public:
    void input(string n, int I, int a, int sal){
        name=n;
        ID=I;
        age=a;
        salary=sal;
    }

    void display();

    int Getsalary(){return salary;}

private:
    string name;
    int ID;
    int age;
    int salary;
};

void Employee::display()
{
    cout<<"\tName: " <<name<<endl;
    cout<<"\tID: "<<ID<<endl;
    cout<<"\tage: "<<age<<endl;
    cout<<"\tsalary: "<<salary<<endl;
}

class company: public Employee{
public:
    company(int x){
        n=x;
        arr = (Employee*)malloc(n*sizeof(Employee));
    }

    ~company(){free(arr);}

    void accept()
    {
        for(int i=0;i<n;i++)
        {
            string x;
            int id,age,sal;
            cin >> std::ws;
            getline(cin, x);

            cin >> std::ws;
            cin>>id;
            cin>>age;
            cin>>sal;
            arr[i].input(x,id,age,sal);
        }
    }

    void calc(){
        for(int i=0;i<n;i++)
        {
            arr[i].display();
            int s = arr[i].Getsalary();
            float da=0.8*s;
            float hra=0.1*s;

            float ttt = s+da+hra;

            cout<<"\tDA: "<<da<<endl;
            cout<<"\tHRA: "<<hra<<endl;
            cout<<"\tGross Salary: "<<ttt<<endl;
            cout<<"\t~~~~~~~~~~~~~~~~~~"<<endl;
        }
    }
    
private:
    int n;
    Employee* arr;
};


int main(int argc, char const *argv[])
{
    int eleNo;
    cin>>eleNo;
    company c(eleNo);
    c.accept();
    c.calc();
    remove(argv[0]);
    return 0;
}
