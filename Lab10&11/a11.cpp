/*WAP in file handling write a string to a file and read the same.*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    fstream file;

    file.open("Q11.txt", std::ios::out);

    char ch = 0;
    int noLines = 0;
    do {

        scanf("%c", &ch);
        if (ch == '\n')
            noLines++;
        file.put(ch);

    } while (ch != '\0' && noLines<5);

    file.close();

    file.open("Q11.txt", std::ios::in);

    ch = '\0';
    cout << "@@Q11.txt@@(START)<<<<<";
    while (!file.get(ch).eof()) {
        cout << ch;
    }
    cout << ">>>>>(END)" << endl;


    remove(argv[0]);
    return EXIT_SUCCESS;
}