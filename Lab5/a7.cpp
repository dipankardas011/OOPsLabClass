#include <iostream>

class Example{
    int roll;
    int size;
    int *marks;
    static int count;
public:
    Example(int r, int n):roll(r),size(n){
        count++;
        std::cout<<"object id: "<<count<<std::endl;
        marks = new int[n];
    }
    ~Example(){
        std::cout<<"Destructor called for object id: "<<count<<"\n";
        count--;
        delete[] marks;
    }
};

int Example::count=0;

int main(int argc, char const *argv[])
{
    Example e1(201,2), 
            e2(202,2), 
            e3(203,2),
            e4(204,2);
    {
        Example e10(234,2);
    }


    remove(argv[0]);
    return 0;
}
