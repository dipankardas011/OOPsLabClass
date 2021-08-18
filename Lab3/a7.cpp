/*WAP in C++ which will illustrate the use of static data member. Hint: count the number of
object created.*/
#include <iostream>

class Object{
public:
    Object(){
        count++;
    }
    void display(){
        std::cout<<"Count: "<<count<<std::endl;
    }
private:
    static int count;
};

int Object::count=0;

int main(int argc, char const *argv[])
{
    Object a;
    a.display();
    
    Object b;
    b.display();

    Object c;
    c.display();
    std::cout<<"total number of objects: ";
    c.display();
    remove(argv[0]);
    return 0;
}
