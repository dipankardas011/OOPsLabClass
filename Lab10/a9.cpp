/*WAP in C++ which overload the < (relational operator)*/
#include <iostream>
#include <string.h>
using namespace std;

#define MAXLEN 30

class String {
    char str[MAXLEN];
public:
    String(char* x) {
        strcpy(str, x);
    }

    /**
     * @def Comparisation based on the ascii value of ecah character
     * if the any one which is same chacter but diff len the then higher len is choosed
     *as then bigger string
     */
    bool operator > (String& SS) {
        int len1=0;
        int len2=0;

        for (; this->str[len1]; len1++);
        for (; SS.str[len2]; len2++);

        // printf("Len1: %d\tLen2: %d\n", len1, len2);

        if (len1 > len2)
            return true;
        if (len2 < len1)
            return false;

        for (int iter = 0; iter < len1; iter++) {
            if (this->str[iter] > SS.str[iter]) {// any char is smaller then second we return true
                return true;
            }
        }

        return false;
    }

    void display() {
        cout << "Entered String: " << str << endl;
    }
};

int main(int argc, char** argv) {
    char s1[MAXLEN] = {0};
    char s2[MAXLEN] = { 0 };
    cout << "enter the string1&2\n";
    cin >> s1;
    cin >> s2;
    String str1(s1);
    String str2(s2);

    cout << ((str1 > str2) ? "str1 > str2" : "str1 ⊁ str2") << endl;
    remove(argv[0]);
    return EXIT_SUCCESS;
}