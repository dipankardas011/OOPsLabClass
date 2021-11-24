/*WAP in C++ to copy the content of one file to another file. Copy one character at a time*/
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {
    fstream file1, file2;

    file1.open("Q12i.txt", std::ios::out);
    cout << "Enter the file contents\n";
    char ch = 0;
    int noLines = 0;
    do {

        scanf("%c", &ch);
        if (ch == '\n')
            noLines++;
        file1.put(ch);

    } while (ch != '\0' && noLines<5);

    file1.close();

    
    file1.open("Q12i.txt", std::ios::in);
    file2.open("Q12ii.txt", std::ios::out | std::ios::app);


    while (!file1.get(ch).eof()) {
        file2.put(ch);
    }

    file1.close();
    file2.close();
    cout << "@@Q12ii@@(START)<<<<<" << endl;
    file2.open("Q12ii.txt", std::ios::in);
    while (!file2.get(ch).eof()) {
        cout << ch;
    }
    cout << ">>>>>(END)" << endl;
    file2.close();

    remove(argv[0]);
    return EXIT_SUCCESS;
}