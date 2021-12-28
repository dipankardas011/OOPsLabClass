#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cctype>
/**
 * @def enter the name into the file and then print it in reverse order
 */
namespace Q1{
    int exec(){
        std::fstream file;
        file.open("file2.txt", std::ios::out);
        std::string name;
        std::cout << "Enter your name: ";
        getline(std::cin >> std::ws, name);
        file << name;
        file.close();
        char ch;
        file.open("file2.txt", std::ios::in);
        file.seekg(0, file.end);
        int len = file.tellg();
        while (len--) {
            file.seekg(len, file.beg);
            file >> ch;
            std::cout << ch;
        }
        std::cout << std::endl;
        file.close();
        return 0;
    }
}

/**
 * @def WAP to eneter the vehicle number from keyboard
 * [x] the first 2 characters are combination of alphabets(AtoZ) except the combination IN
 * [X] next four are combination of digits (0 to 9) except the combination 0000
 */

namespace Q2{
    int exec(){
        std::string vehicleNo;
        std::cout << "Enter the vehicle number: ";
        std::cin >> vehicleNo;
        try{
            std::string first = vehicleNo.substr(0, 2);
            std::string second = vehicleNo.substr(2);
            if(isalpha(first.at(0)) && isalpha(first.at(1)) && first.compare("IN") != 0){
                //valid
                if(second.length()!=4)
                    throw -1;

                int counter = 0;
                for (char i : second)
                {
                    if(isdigit(i)){
                        if(i == '0')
                            counter++;
                    } else {
                        throw -1;
                    }
                }
                if(counter == second.length()){
                    throw -1;
                } else {
                    printf("VALID\n");
                }
            }
            else
            {
                throw -1;
            }
        } catch (int n){
            std::cout << "Invalid Number\n";
        }
        return 0;
    }
}

int main(int argc, char** argv) {
    Q1::exec();
    Q2::exec();
    remove(argv[0]);
    return EXIT_SUCCESS;
}