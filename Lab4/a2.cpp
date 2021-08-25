/*Create a class distance which stores a distance in feet and inches. Input 2 distance values in
objects, add them, store the resultant distance in and object and display it. [Write the above
program in two ways.
a) store the resultant distance in the calling object:C3.add(C1,C2)
b) return the resultant object C3=C1.add(C2)*/

#include <iostream>

class Distance{
    int feet;
    int inches;
public:
    Distance(int f, int i):feet(f),inches(i){}

    Distance add(Distance d1, Distance d2){
        this->inches = d1.inches+d2.inches;
        this->feet = (this->inches)/12;

        this->inches %=12;
        this->feet += d1.feet+d2.feet;

        return *this;
    }
    void display(){
        std::cout<<feet<<" feets "<<inches<<"inches"<<std::endl;
    }
};

int main(int argc, char const *argv[])
{
    Distance d1(23,11);
    Distance d2(34,10);
    Distance d3(0,0);
    d1.display();
    d2.display();
    d3.add(d1,d2);

    d3.display();

    Distance d4(0,0);
    d4=d3.add(d1,d2);

    d4.display();

    remove(argv[0]);
    return 0;
}
