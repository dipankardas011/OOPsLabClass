/*Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 cent toll. Mostly they do, but sometimes a car goes by without paying. The tollbooth keeps track of the number of cars that have gone by, and of the total amount of money collected. Model this tollbooth with a class called TollBooth. The two data items are a type unsigned int to hold the total number of cars, and a type double to hold the total amount of money collected. A constructor initializes both of these to 0. A member function called payingCar() increments the car total and adds 0.50 to the cash total. Another function, called nopayCar(), increments the car total but adds nothing to the cash total. Finally, a member function called display() to show the two totals. Include a
supporting class to test this class.*/
#include <iostream>
using std::cin;
using std::endl;
using std::cout;

class Toolbooth{
protected:
    uint32_t noOfCars;
    double totalAmt;
public:
    Toolbooth(){
        noOfCars = 0;
        totalAmt = 0.0;
    }
    void payingCar(){
        noOfCars++;
        totalAmt += 0.5;
    }
    void NopayCar(){
        noOfCars++;
    }
    void display(){
        cout<<"Total cars: "<<noOfCars<<endl;
        cout<<"Total Amount: $"<<totalAmt<<endl;
    }
};

class Test : public Toolbooth{
public:
    Test() : Toolbooth(){
        // let N cars pass with paying and M don't
        char choice;
        int NoOfPay=0,
            NoOfNonPay=0;
        while(1)
        {
            cout<<"Enter Pay [p] or NoPay[n] and [Q] to STOP-> ";
            cin>>choice;
            switch(choice)
            {
                case 'p':
                {
                    Toolbooth::payingCar();
                    NoOfPay++;
                }
                break;
                case 'n':
                {
                    Toolbooth::NopayCar();
                    NoOfNonPay++;
                }
                break;
            }
            if(choice == 'Q')
                break;
        }
        if(totalAmt == (NoOfPay*0.5) && NoOfPay+NoOfNonPay == noOfCars)
        {
            cout<<"Succeded!!\n";
            Toolbooth::display();
        }else{
            cout<<"Error in code\n";
        }
    }
};

int main(int argc, char** argv) {
    Test t;
    remove(argv[0]);
    return EXIT_SUCCESS;
}