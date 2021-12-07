/*WAP in C++ to randomly read the record of a particular employee stored in a text file.*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Employee {
    string name;
    float salary;

public:
    void setName(string n) { name = n; }

    void setSalary(float f) { salary = f; }

    void display() {
        cout << "\tName: " << name << endl;
        cout << "\tSalary: " << salary << endl;
        cout << endl;
    }
};

int main(int argc, char** argv) {
    Employee emp;
    // enter the data
    fstream FILE;
    int ch;
    FILE.open("Q14.txt", std::ios::out | std::ios::binary);
    while (1) {
        cout << "Enter 0 TO STOP the input: ";
        cin >> ch;
        if (!ch)
            break;

        string n;
        float f;
        cout << "Enter the name, salary" << endl;
        getline(cin >> ws, n);
        cin >> f;
        emp.setName(n);
        emp.setSalary(f);

        FILE.write((char*)&emp, sizeof(Employee));
    }

    FILE.close();

    // ios::ate => when reading i.e. initial to end but can change the position 
    // ios::app => when writing i.e. intial to end of the file but cant move it
    // ate	at end	The output position starts at the end of the file.
    // app	append	All output operations happen at the end of the file, appending to its existing contents.
    // trunc	truncate	Any contents that existed in the file before it is open are discarded.
    FILE.open("Q14.txt", std::ios::ate | std::ios::in | std::ios::binary);
    size_t N = (FILE.tellg() / sizeof(Employee));
    cout << "Number of Employees: {" << N << "}" << endl;
    
    FILE.seekg(0, std::ios::beg);

    cout << "@@Q14.txt@@(START)<<<<<\n";

    while (!FILE.read((char*)&emp, sizeof(Employee)).eof()) {
        emp.display();
    }
    FILE.close();

    cout << ">>>>>>(END)" << endl;
    int i = 0;
    cout << "Enter the employee index required:";
    cin >> i;

    FILE.open("Q14.txt", std::ios::in | std::ios::binary);

    int iter = 0;
    while (!FILE.read((char*)&emp, sizeof(Employee)).eof()) {
        if (iter == i) {
            emp.display();
            break;
        }
        iter++;
    }

    FILE.close();


    remove(argv[0]);
    return EXIT_SUCCESS;
}