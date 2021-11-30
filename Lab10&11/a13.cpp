/*Write a program using class and file handling having two variable regno and name having four function setRegno() and setName and getRegno() and *getName(). Accept the value, write to the file, read from the file and display to the monitor. Use read() and write() binary function for the same. Write multiple records in the file and also count the number of record present in the same file.*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
public:
    Student(string x = "", uint y = 0) : name(x), regno(y) {}

    void setName(string NAME) {
        name = NAME;
    }

    void setRegno(uint YY) {
        regno = YY;
    }

    uint getRegno() { return regno; }

    string getName() { return name; }

private:
    string name;
    uint regno;
};

int main(int argc, char** argv) {
    std::fstream FILE;

    FILE.open("Q13.bin", std::ios::out | std::ios::binary);
    Student *stu = new Student[2];

    int i = 0;
    while(i<2) {
        string na;
        uint reg;
        cout << "Enter Name and the regNo" << endl;
        getline(std::cin >> std::ws, na);
        cin >> reg;
        stu[i].setName(na);
        stu[i].setRegno(reg);
        FILE.write((char*)&stu[i], sizeof(stu[i]));
        i++;
    }
    FILE.close();


    FILE.open("Q13.bin", std::ios::in | std::ios::binary | std::ios::ate);

    cout << "No of objects: " << (FILE.tellg() / sizeof(Student)) << endl;

    FILE.seekg(0, ios::beg);
    i = 0;

    cout << "@@Q13.bin@@ (START)<<<<<<";

    while (!FILE.read((char*)&stu[i], sizeof(stu[i])).eof()) {
        cout << "Student " << i << endl;
        cout << "\tName: " << stu[i].getName() << endl;
        cout << "\tRegNo: " << stu[i].getRegno() << endl;
        i++;
    }
    cout << ">>>>>>(END)" << endl;
    
    FILE.close();

    delete[] stu;
    // FILE.open("Q13.bin", std::ios::in | std::ios::binary | std::ios::ate);
    // cout << "No of objects: " << (FILE.tellg() / sizeof(Student)) << endl;
    // FILE.close();
    
    remove(argv[0]);
    return EXIT_SUCCESS;
}