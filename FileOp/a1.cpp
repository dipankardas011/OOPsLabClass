#include <iostream>
#include <fstream>
#include <string>


int main(int argc, char** argv) {

    std::string fileName = "demo.txt";

    std::fstream FILE;

    std::string name;
    // FILE.open(fileName, std::ios::app | std::ios::out);

    // for (int i = 0; i < 5; i++) {
    //     getline(std::cin >> std::ws, name);
    //     FILE << name << std::endl;
    // }
    // FILE.close();

    FILE.open(fileName, std::ios::in);
    name.clear();
    int i = 0;
    while (!(FILE.eof()))
    {
        getline(FILE >> std::ws, name);
        std::cout << "Name [" << (i + 1) << "]" << name << std::endl;
        i++;
    }
    FILE.close();

    remove(argv[0]);
    return EXIT_SUCCESS;
}