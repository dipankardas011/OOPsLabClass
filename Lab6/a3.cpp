/*(Multilevel Inheritance) Extend the program 2 to derive a class result from class ‘test’ which includes member function to calculate total marks and percentage of a student. Input the data for a student and display its total marks and percentage.*/
#include <iostream>
#define LEN 5
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

class Test : public Student{
    int test[LEN];
public:
    Test(char *s, int r, int a):Student(s,r,a){
        std::cout<<"enter the marks for 5 subjs. ";
        for(int i=0;i<LEN;i++)
            std::cin>>test[i];
    }
    void getTotal(int &t){
        for(auto i : test){
            t+=i;
        }
    }
    void displayR(){
        display();
        for(int i=0;i<LEN;i++){
            std::cout<<"Subj "<<(i+1)<<": "<<test[i]<<std::endl;
        }
    }
};

class Result : public Test{
    int total;
    float perc;
public:
    Result(char *s, int r, int a):Test(s,r,a){
        total=0;
        perc = 0.0f;
    }
    void Display(){
        displayR();
        getTotal(total);
        std::cout<<"total: "<<total<<std::endl;
        perc = float(total) / LEN;
        std::cout<<"Percentage: "<<perc<<"%"<<std::endl;
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
    Result ro(na,r,a);
    ro.Display();
    remove(argv[0]);
    return 0;
}
