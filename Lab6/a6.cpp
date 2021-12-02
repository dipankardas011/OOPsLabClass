/*Write a program to create a class called STUDENT with data members Roll Number, Name and Age. Using inheritance, create the classes UGSTUDENT and PGSTUDENT having fields a semester, fees and stipend. Enter the data for at least 5 students. Find the average age for all UG and PG students separately.*/
#include <iostream>
#include <string>
using namespace std;
namespace Students
{
    // use the virtual pointer to point depending upon the student
    /*Write a program to create a class called STUDENT with data members Roll Number, Name and Age. Using inheritance, create the classes UGSTUDENT and PGSTUDENT having fields a semester, fees and stipend. Enter the data for at least 5 students. Find the average age for all UG and PG students separately*/
    #define NO_OF_STUDENT 5

    class UGStudent{
        std::string semister;
        float fees;
        float stipend;
        public:
        void getData(){
            printf("Enter the semister, fees, stipend (UG)\n");
            cin >> semister;
            cin >> fees;
            cin >> stipend;
        }
        void displayInfo(){
            cout<<"\tSemister: "<< semister<<endl;
            cout<<"\tFees: "<< fees<<endl;
            cout << "\tStipend: " << stipend << endl
                 << endl;
        }
    };

    class PGStudent{
        std::string semister;
        float fees;
        float stipend;
        public:
        void getData(){
            printf("Enter the semister, fees, stipend (PG)\n");
            cin >> semister;
            cin >> fees;
            cin >> stipend;
        }
        void displayInfo(){
            cout<<"\tSemister: "<< semister<<endl;
            cout<<"\tFees: "<< fees<<endl;
            cout << "\tStipend: " << stipend << endl
                 << endl;
        }
    };

    class Student : public UGStudent, public PGStudent{
        std::string name;
        int roll;
        int age;
        bool choice;
        UGStudent *ug;
        PGStudent *pg;

    public:
        Student(bool ch, std::string n, int r, int a)
        :name(n), roll(r), age(a), choice(ch){
            if(choice){
                ug = new UGStudent();
                ug->getData();
                pg = NULL;
            } else {
                pg = new PGStudent();
                pg->getData();
                ug = NULL;
            }
        }
        bool isUG(){
            return (choice) ? true : false;
        }
        int getAge(){
            return age;
        }

        void displayInfo(){
            if(isUG()){
                cout<<"#UGStudent\n";
                cout << "\tName: " << name << endl;
                cout << "\tRoll: " << roll << endl;
                cout << "\tAge: " << age << endl;
                ug->displayInfo();
            } else {
                cout<<"#PGStudent\n";
                cout << "\tName: " << name << endl;
                cout << "\tRoll: " << roll << endl;
                cout << "\tAge: " << age << endl;
                pg->displayInfo();
            }
        }
    };

    int exec(){
        Student* stu[NO_OF_STUDENT] = {NULL};
        string n;
        int age, roll;
        bool ch;
        for (int i = 0; i < NO_OF_STUDENT;i++){
            cout << "Enter the name, age, roll, 1 if Ugstudent 0 for PGStudent" << endl;
            getline(std::cin >> std::ws, n);
            cin >> age;
            cin >> roll;
            cin >> ch;
            stu[i] = new Student(ch, n, roll, age);
        }

        float sumU = 0.0l, sumP = 0.0l;
        int countU = 0, countP = 0;
        for (int i = 0; i < NO_OF_STUDENT;i++){
            if(stu[i]->isUG()){
                sumU += stu[i]->getAge();
                countU++;
            } else {
                sumP += stu[i]->getAge();
                countP++;
            }
            stu[i]->displayInfo();
        }
        cout << "Average age of UGStudent: " << sumU / countU << endl;
        cout << "Average age of PGStudent: " << sumP / countP << endl;

        for (int i = 0; i < NO_OF_STUDENT;i++){
            delete stu[i];
        }
        return 0;
    }
}

int main(int argc, char** argv) {
    Students::exec();

    remove(argv[0]);
    return EXIT_SUCCESS;
}