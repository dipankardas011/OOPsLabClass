/*WAP in C++ which will accept the RollNo and Marks of 10 students and display the same using the concept of array of Object*/
#include <iostream>
#include <iomanip>
#define NUM 10
class Exam{
public:

    void input(int r, int v){
        roll=r;
        marks=v;
    }
    void display()
    {
        std::cout<<"| "<<roll<<"  |  "<<std::setw(4)<<marks<<" |"<<std::endl;
    }
private:
    int roll;
    int marks;
};

int main(int argc, char const *argv[])
{
    Exam *ee=new Exam[NUM];
    std::cout<<"enter roll and marks\n";
    for(int i=0;i<NUM;i++)
    {
        int r,v;
        std::cin>>r>>v;
        ee[i].input(r,v);
    }
    printf("+------+-------+\n");
    printf("| Roll | Marks |\n");
    for(int i=0;i<NUM;i++)
        ee[i].display();
    printf("+------+-------+\n");

    delete[] ee;
    remove(argv[0]);
    return 0;
}
