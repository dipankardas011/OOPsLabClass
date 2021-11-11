/*WAP in C++ in file handling using get() and put() function to read and write a stirng.*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    string fileName = "Q10.txt";
    fstream file;

    file.open(fileName, std::ios::out);

    std::cout << "Enter the string to be entered: ";
    string usr;
    getline(std::cin >> std::ws, usr);
    for (int i = 0; i < usr.length(); i++) {
        file.put(usr[i]);
    }
    file.close();

    file.open(fileName, std::ios::in);

    cout << "File contains\n<<<<<<";
    char ch;
    while (!file.get(ch).eof()) {
        cout << ch;
    }
    cout << ">>>>>>" << endl;
    file.close();
    remove(argv[0]);
    return EXIT_SUCCESS;
}