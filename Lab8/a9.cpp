/*WAP a menudriven program that reads title of a book from the user the program will check if the book is avilable or not if available then display the details of the booksuch as author, price and number of copies available calculate the bill of the user as per the number of copies required decrement the count of books requested from available copies the program must slo have functions to have functions to update the number of copies and the price of the book*/
#include <iostream>
#include <string>
#include <iomanip>
#define NO_OF_BOOKS 2
using std::cin;
using std::cout;
using std::endl;

class Book
{
public:
    std::string author;
    std::string title;
    double price;
    int noOfCopies;

public:
    Book(std::string nt = "", std::string n = "", double p = 0.0, int no = 0) : title(nt), author(n), price(p), noOfCopies(no) {}

    inline bool isAvailable()
    {
        return noOfCopies > 0;
    }
};

class Library : public Book
{
protected:
    Book *shelf;
    int totalBooks;

public:
    Library(int n) : totalBooks(n)
    {
        shelf = new Book[n];
        insertBooks();
    }
    void insertBooks()
    {
        std::string n;
        std::string n1;
        double price;
        int copies;
        cout << "Insert the Books to the self!!\n";
        for (int i = 0; i < totalBooks; i++)
        {
            cout << "Enter the title , author , price , no of copies anailable\n";
            getline(std::cin >> std::ws, n);
            getline(std::cin >> std::ws, n1);
            cin >> price >> copies;
            shelf[i] = Book(n, n1, price, copies);
        }
    }
    void getBook(std::string request, int no)
    {

        for (int i = 0; i < totalBooks; i++)
        {
            if ((shelf[i].title).compare(request) == 0)
            {
                if (shelf[i].isAvailable() && shelf[i].noOfCopies >= no)
                {
                    shelf[i].noOfCopies -= no;
                    display(shelf[i]);
                    cout << "| $" << no * shelf[i].price << " |" << endl;
                    cout << "| " << no << " |" << endl;
                    cout << "+" << std::setw(20)
                         << std::setfill('-') << "+" << endl;
                }
                else
                {
                    std::cerr << "Requested Book not available\n";
                    return;
                }
                break;
            }
        }
    }
    inline void display(const Book &o)
    {
        cout << "Book requested\n";
        cout << "+" << std::setw(20)
             << std::setfill('-') << "+" << endl;
        cout << "| " << o.title << " |" << endl;
        cout << "| " << o.author << " |" << endl;
    }

    void inventory()
    {
        cout << "INVENTORY\n";
        for (int i = 0; i < totalBooks; i++)
        {
            cout << "+++++++++++++++++++++++\n";
            cout << "+ title: " << shelf[i].title << endl;
            cout << "+ author: " << shelf[i].author << endl;
            cout << "+ price: $" << shelf[i].price << endl;
            cout << "+ noOfcopies left: " << shelf[i].noOfCopies << endl;
        }
        cout << "+++++++++++++++++++++++\n";
    }

    ~Library()
    {
        delete[] shelf;
    }
};

int main(int argc, char **argv)
{

    Library start(NO_OF_BOOKS);
    while (1)
    {

        int ch;
        std::string x;
        cout << "enter the quantity demanded and \"-11\"to display stock \"-999\" to stop!!" << endl;
        cin >> ch;
        if (ch == -999)
        {
            break;
        }
        if (ch == -11)
        {
            start.inventory();
            continue;
        }
        cout << "Enter the title book demanded: " << endl;
        getline(std::cin >> std::ws, x);
        start.getBook(x, ch);
    }

    remove(argv[0]);
    return EXIT_SUCCESS;
}