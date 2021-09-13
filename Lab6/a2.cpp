/*Create a class student which stores name, roll number and age of a student. Derive a class
test from student class, which stores marks in 5 subjects. Input and display the details of
a student.*/
#include <iostream>

class Student{
    char *name;
    int roll;
    int age;
public:
    Student(char *k, int r, int a):name(k),roll(r),age(a){}

    void display(){
        std::cout<<"name: "<<name<<std::endl;
        std::cout<<"roll: "<<roll<<std::endl;
        std::cout<<"age: "<<age<<std::endl;
    }
};

class Test:public Student{
#define len 5
    int test[len];
public:
    Test(char *s, int r, int a):Student(s,r,a){
        std::cout<<"enter the marks for 5 subjs. ";
        for(int i=0;i<len;i++)
            std::cin>>test[i];
    }
    void displayR(){
        display();
        for(int i=0;i<len;i++){
            std::cout<<"Subj "<<(i+1)<<": "<<test[i]<<std::endl;
        }
    }
};

int main(int argc, char const *argv[])
{
    char na[30];
    std::cout<<"Enter the name: ";
    std::cin.getline(na,30);
    int r,a;
    std::cout<<"Enter the roll: ";
    std::cin>>r;
    std::cout<<"Enter the age: ";
    std::cin>>a;
    Test t(na,r,a);
    t.displayR();
    remove(argv[0]);
    return 0;
}
