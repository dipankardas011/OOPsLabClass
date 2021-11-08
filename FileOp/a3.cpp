#include <iostream>
#include <fstream>

class Student{
public:
    Student(int id=0, int roll=0) : ID(id), Roll(roll) {}

    void printData() {
        std::cout << "Id: " << ID << std::endl;
        std::cout << "Roll: " << Roll << std::endl;
    }

private:
    int ID;
    int Roll;
};

int main(int argc, char** argv) {
    std::fstream FILE;

    FILE.open("classInfo", std::ios::out | std::ios::binary);
    Student *stu = new Student[2];

    int i = 0;
    while(i<2) {
        int id, r;
        std::cout << "enter id, roll-> ";
        std::cin >> id >> r;
        stu[i] = Student(id, r);
        FILE.write((char *)&stu[i], sizeof(stu[i]));
        i++;
    }
    FILE.close();
    // for (int i = 0; i < 2;i++)
    // {
    //     stu[i].printData();
    // }
    FILE.open("classInfo", std::ios::in | std::ios::binary);
    for (int i = 0; i < 2;i++){
        FILE.read((char *)&stu[i], sizeof(stu[i]));
        stu[i].printData();
    }
        delete[] stu;
    remove(argv[0]);
    return EXIT_SUCCESS;
}