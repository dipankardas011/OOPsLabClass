/*WAP in C++ to read a file that contains small case characters. Then write these characters into another file with all lower case characters converted into upper case.*/
#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
#define MAX_FILE_LENGTH 50
int main(int argc, char** argv) {
    fstream f1;
    char ch;
    f1.open("Q15i.txt", std::ios::out);
    cout << "Enter ~ to STOP Input" << endl;
    int i = 0;
    while (i < MAX_FILE_LENGTH) {
        cin >> ch;
        if (ch == '~')
            break;
        i++;
        f1.put(ch);
    }
    f1.close();

    fstream f2;
    f1.open("Q15i.txt", std::ios::in);
    f2.open("Q15ii.txt", std::ios::out);

    while (!f1.get(ch).eof()) {
        if (isspace(ch))
            f2.put(ch);
        else
            f2.put(toupper(ch));
    }

    f1.close();
    f2.close();
    f2.open("Q15ii.txt", ios::in);
    cout << "@@Q15ii.txt@@ (START)<<<<<" << endl;
    while (!f2.get(ch).eof())
        cout << ch;
    cout << ">>>>(END)" << endl;
    f2.close();
    remove(argv[0]);
    return EXIT_SUCCESS;
}