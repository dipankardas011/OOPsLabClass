/*exception with multiple catch*/
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int age;
    cout << "Enter your age ";
    cin >> age;

    try {
        if (age > 0 && age <= 100) {
            cout << "Your age is: " << age << endl;
        }
        if (age <= 0) {
            throw 'X';
        }
        if (age >100) {
            throw age;
        }
    }
    catch (int i) {
        cerr << "Age is more the average human life >100" << endl;
    }
    catch (char c) {
        cerr << "Invalid Age" << endl;
    }
    catch (...) {
        cerr << "Other error" << endl;
    }

    remove(argv[0]);
    return EXIT_SUCCESS;
}