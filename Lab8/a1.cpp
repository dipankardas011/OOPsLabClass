/*WAP to design a class Validate_Email which contains a static data member "email_address" and static member function "check()" to validate given email_address is valid or not if the "email_address violates any of the following conditions then a message should be displayed as "invalid email address"
    i) it must have '@' symbol in the middle of the string'
    ii) the string must be terminated with ".com"*/
#include <iostream>
#include <string>
using std::cin;
using std::endl;
using std::cout;
#define AMP '@'
const std::string ENDS = ".com";

class Validate_Email{
public:
    static std::string email_address;
    static bool check(){
        
        if(email_address.find(AMP) != std::string::npos)
        {
            if(email_address.front() == AMP)
                return false;
            const int pos = email_address.find_last_of(ENDS);
            // cout<<pos<<endl;
            if(pos != std::string::npos && email_address.at(pos-ENDS.length()) != AMP)
                return true;
            return false;
        }
        else{
            return false;
        }
    }
};
std::string Validate_Email::email_address = "";

int main(int argc, char** argv) {
    cout<<"Enter the email for validaty-> ";
    cin>>Validate_Email::email_address;

    (Validate_Email::check())?
        cout<<"Valid email address\n" : cout<<"Invalid email address\n";
    remove(argv[0]);
    return EXIT_SUCCESS;
}