/*Create a class which stores name, roll number and total marks for a student. Input
data for n students. Find the average marks scored by n students, store it as a data
member of the class and display it using a function*/
#include <iostream>

class Student
{
public:
    void input(std::string x, int r, int s, int t){
        name = x;
        roll = r;
        subj = s;
        total = t;
    }


    void display()
    {
        std::cout << "\tName: " << name << std::endl;
        std::cout << "\tRoll: " << roll << std::endl;
        std::cout << "\tTotal: " << total << std::endl;
        std::cout << "\tAverage: " << calculateAvg() << std::endl;
    }

    float calculateAvg()
    {
        return total / (float)subj;
    }
private:
    std::string name;
    int roll;
    int subj;
    int total;
};

int main(int argc, char const *argv[])
{
    Student *ss;
    int n;
    printf("Enter the no of students.. ");
    std::cin>>n;
    ss = new Student[n];

    std::string x;
    int roll, mark, total, subjects;
    for(int i=0;i<n;i++){
        std::cout<<"Enter the name.. "<<std::endl;
        std::cin>>std::ws;
        getline(std::cin,x);
        std::cout<<"Enter the roll.. ";
        std::cin>>roll;
        std::cout<<"Enter the no of subjects.. ";
        std::cin>>subjects;
        int j=subjects;
        total=0;
        while(j--){
            std::cin>>mark;
            total+=mark;
        }
        ss[i].input(x,roll, subjects, total);
    }

    for(int i=0;i<n;i++)
    {
        std::cout<<"Student "<<(i+1)<<std::endl;
        ss[i].display();
    }
    remove(argv[0]);
    return 0;
}