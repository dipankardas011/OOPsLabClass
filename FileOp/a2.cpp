#include <iostream>
#include <fstream>


int main(int argc, char** argv) {
    std::string fileName = "demo1.txt";

    std::fstream FILE, BFILE;

    FILE.open(fileName, std::ios::in);
    char ch;
    int noOfLines = 0;
    int noOfWords = 0;
    BFILE.open("demo2.bin", std::ios::binary | std::ios::out);
    while (!FILE.eof())
    {
        FILE.get(ch);
        // std::cout << (int)ch << std::endl;
        int N = (int)ch;
        while (N > 0)
        {
            BFILE << (N & 1);
            N = N >> 1;
        }
        BFILE << '\n';
        std::cout << ch ;
        if (ch == '\n')
        {
            noOfLines++;
            noOfWords++;
        }
        if(ch==' '){
            noOfWords++;
        }
    }
    BFILE.close();
    std::cout << std::endl
              << "No of lines: " << noOfLines << "\nNo of Words: " << noOfWords << std::endl;
    FILE.close();

    remove(argv[0]);
    return EXIT_SUCCESS;
}