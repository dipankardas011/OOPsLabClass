/*write a default argument*/
#include <iostream>
#include <string>
using namespace std;

void function(std::string name, int roll, int marks=-99, char grade='-'){
    cout<<"~~~~~~~~~~~~~~~~~\n";
    cout<<"Name: "<<name<<"\n";
    cout<<"Roll: "<<roll<<"\n";
    cout<<"Marks: "<<marks<<"\n";
    cout<<"Grade: "<<grade<<"\n";
    cout<<"~~~~~~~~~~~~~~~~~\n";
}

int main(int argc, char const *argv[])
{
    function("abc", 340904);
    function("abc 234", 240904, 69);
    function("bcd 324", 342444, 87,'O');
    remove(argv[0]);
    return 0;
}
