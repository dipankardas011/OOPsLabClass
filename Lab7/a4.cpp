/*wap to implement array of objects*/
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;
#define N 2

class Car{
    string color;
    string car_name;

public:
    Car(){}

    Car(string name, string c):car_name(name),color(c){}

    void display(){
        cout<<"~~~ Details ~~~\n";
        cout<<"name: "<<car_name<<endl;
        cout<<"color: "<<color<<endl;
        cout<<"~~~~~~~~~~~~~~~\n";
    }
};

int main(int argc, char const *argv[])
{
    Car *cars = new Car[N];
    int i=0;
    while(i<N){
        string na,
            color;
        cout<<"enter the name of car: ";
        fflush(stdin);
        cin>>na;       
        cout<<"enter the color: ";
        cin>>color;
        cars[i++] = Car(na, color);
    }

    cout<<"Display\n";
    for(i=0;i<N;i++){
        cout<<"\t"<<(i+1)<<endl;
        cars[i].display();
    }
    delete []cars;
    remove(argv[0]);
    return 0;
}
