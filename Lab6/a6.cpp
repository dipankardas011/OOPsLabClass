/*Write a program to create a class called STUDENT with data members Roll Number, Name and Age. Using inheritance, create the classes UGSTUDENT and PGSTUDENT having fields a semester, fees and stipend. Enter the data for at least 5 students. Find the average age for all UG and PG students separately.*/
#include <iostream>
#include <cstring>
using std::cin;
using std::endl;
using std::cout;
#define LEN 20
#define SIZE 3

class Student{
private:
    int roll;
    int age;
    char name[LEN] = {0};

public:
    Student(char *x, int r, int a):roll(r), age(a){
        strncpy(name,x,strlen(x)+1);
    }
    virtual void display(){
        cout<<"\tName: "<<name<<endl;
        cout<<"\troll: "<<roll<<endl;
        cout<<"\tage: "<<age<<endl;
    }
    virtual char whatClass()=0;
    int getAge(){
        return age;
    }
};

class UGStudent : public Student{
private:
    char semister;
    int fees;
    int stipend;
    int indx;

public:
    static int countU;
    UGStudent(char *x, int r, int a, char sem, int f, int s):
        Student(x,r,a)
    {
        semister = sem;
        fees = f;
        stipend = s;
        indx = ++countU;
    }

    inline char whatClass(){
        return 'u';
    }
    int getAge(){
        return Student::getAge();
    }
    void display();
};
int UGStudent::countU=0;

class PGStudent : public Student{
private:
    char semister;
    int fees;
    int stipend;
    int indx;

public:
    static int countP;
    PGStudent(char *x, int r, int a, char sem, int f, int s):
        Student(x,r,a)
    {
        semister = sem;
        fees = f;
        stipend = s;
        indx = ++countP;
    }

    inline char whatClass(){
        return 'p';
    }

    int getAge(){
        return Student::getAge();
    }

    void display();
};
int PGStudent::countP=0;

void UGStudent::display(){
    cout<<"#UGStudent\n";
    Student::display();
    cout<<"\tsemister: "<<semister<<endl;
    cout<<"\tfees: "<<fees<<endl;
    cout<<"\tstipend: "<<stipend<<endl;
}

void PGStudent::display(){
    cout<<"#PGStudent\n";
    Student::display();
    cout<<"\tsemister: "<<semister<<endl;
    cout<<"\tfees: "<<fees<<endl;
    cout<<"\tstipend: "<<stipend<<endl;
}

int main(int argc, char** argv) {
    // create a 5 student 
    Student *arr[SIZE];
    char X;
    for(int i=0;i<SIZE;i++)
    {
        char name[LEN] = {0};
        cout<<"Enter the name, roll, age\n";
        cin.ignore();
        cin.getline(name, LEN);

        int r, a;
        cin>>r>>a;
        char sem;
        int fee, stip;
        cout<<"Enter the U/P for undergragate / postGraduate-> ";
        cin>>X;
        switch(X){
            case 'U':
            case 'u':
            cout<<"Enter the semister, fees, stipend-> ";
            cin>>sem;
            cin>>fee>>stip;

            arr[i] = new UGStudent(name,r,a, sem,fee,stip);

            break;

            case 'P':
            case 'p':
            cout<<"Enter the semister, fees, stipend-> ";
            cin>>sem;
            cin>>fee>>stip;

            arr[i] = new PGStudent(name,r,a, sem,fee,stip);

            break;
        }
    }

    int utot=0,
        ptot=0;
    for(int i=0;i<SIZE;i++)
    {
        arr[i]->display();
        if(arr[i]->whatClass() == 'u'){
            utot += arr[i]->getAge();
        }
        else{
            ptot += arr[i]->getAge();
        }
        printf("\n");
    }

    cout<<"Average age of UGStudent: "<<utot/UGStudent::countU<<endl;
    cout<<"Average age of PGStudent: "<<ptot/PGStudent::countP<<endl;


    remove(argv[0]);
    return EXIT_SUCCESS;
}