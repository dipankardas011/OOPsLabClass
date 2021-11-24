/*WAP to handle division by zero exception in catch block*/
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int denom = 0;
    int num = 0;
    cout << "Enter value of a, b where (a/b): ";
    cin >> num >> denom;
    try {
        if (denom) {
            cout << "(a/b): " << (num / (float)denom) << endl;
        }
        else {
            throw denom;
        }
    }
    catch (int& e) {
        cerr << "Division by ZERO!!" << endl;
    }

    remove(argv[0]);
    return EXIT_SUCCESS;
}