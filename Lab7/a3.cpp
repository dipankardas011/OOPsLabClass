/*wap showing the all types of constructor in a single program*/
#include <iostream>

class Testit{
public:
    Testit():a(0),b(0){}

    Testit(int k, int j):a(k),b(j){}

    Testit(const Testit &ob){
        this->a = ob.a;
        this->b = ob.b; 
    }

    void showData(){
        std::cout<<"a -> "<<a<<"\n";
        std::cout<<"b -> "<<b<<"\n";
    }


private:
    int a;
    int b;
};

int main(int argc, char const *argv[])
{
    Testit i;
    i.showData();

    Testit j(3,5);
    j.showData();

    Testit k = j;
    k.showData();
    remove(argv[0]);
    return 0;
}
