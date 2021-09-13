/*Write a program to create a class called STUDENT with data members Roll Number, Name and Age. Using inheritance, create the classes UGSTUDENT and PGSTUDENT having fields a semester, fees and stipend. Enter the data for at least 5 students. Find the average age for all UG and PG students separately.*/
#include <iostream>
#define SIZE 2

class UGStudent{
protected:
    int semister;
    int fees;
    int stipend;
public:
    void display(){
        std::cout<<"UGStudent\n";
        std::cout<<"Semister: "<<semister<<std::endl;
        std::cout<<"fees: Rs"<<fees<<std::endl;
        std::cout<<"stipend: "<<stipend<<std::endl;
    }
};

class PGStudent{
protected:
    int semister;
    int fees;
    int stipend;
public:
    void display(){
        std::cout<<"PGStudent\n";
        std::cout<<"Semister: "<<semister<<std::endl;
        std::cout<<"fees: Rs"<<fees<<std::endl;
        std::cout<<"stipend: "<<stipend<<std::endl;
    }
};

class Student : public PGStudent, public UGStudent{
    char *name;
    int roll;
    int age;
    char S;
public:
    Student(){}
    Student(char *k, int r, int a):name(k),roll(r),age(a){
        printf("Enter [U] for UGStudent and [P] for PGstudent: ");
        std::cin>>S;
        switch(S){
            case 'U': 
            std::cout<<"Enter the semister no.: ";
            std::cin>>UGStudent::semister;
            std::cout<<"Enter the fees, stipend: ";
            std::cin>>UGStudent::fees>>UGStudent::stipend;
            break;
            case 'P': 
            std::cout<<"Enter the semister no.: ";
            std::cin>>PGStudent::semister;
            std::cout<<"Enter the fees, stipend: ";
            std::cin>>PGStudent::fees>>PGStudent::stipend;
            break;
        }
    }

    void display(){
        std::cout<<"name: "<<name<<std::endl;
        std::cout<<"roll: "<<roll<<std::endl;
        std::cout<<"age: "<<age<<std::endl;
        switch(S){
            case 'U': UGStudent::display();break;
            case 'P': PGStudent::display();break;
        }
    }

    void AverageStudent(int& ageUG,int& countUG, int& agePG, int& countPG){
        switch(S){
            case 'U':
            ageUG += age;
            countUG++;
            break;
            case 'P':
            agePG += age;
            countPG++;
            break;
        }
    }
};

int main(int argc, char const *argv[])
{
    int n=SIZE;
    Student *s = new Student[SIZE];
    int i=0;
    while(n--){
        char na[30];
        int r,a;
        std::cout<<"Enter the name: ";
        std::cin.ignore();
        std::cin.getline(na,30);

        std::cout<<"Enter the roll: ";
        std::cin>>r;
        std::cout<<"Enter the age: ";
        std::cin>>a;
        s[i] = Student(na,r,a);
        i++;
    }
    int ageUG = 0,
        NUG = 0,
        agePG = 0,
        NPG = 0;
    for(i=0; i<SIZE;i++){
        std::cout<<"---------------------\n";
        s[i].display();
        s[i].AverageStudent(ageUG,NUG,agePG,NPG);
    }

    std::cout<<"----------------------\n";
    std::cout<<"Average Age for UGStudent: "<<(ageUG/NUG)<<std::endl;
    std::cout<<"Average Age for PGStudent: "<<(agePG/NPG)<<std::endl;

    
    remove(argv[0]);
    return 0;
}
