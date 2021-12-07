#include <iostream>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;

namespace Q1
{
    void exec()
    {
        int denom = 0;
        int num = 0;
        cout << "Enter value of a, b where (a/b): ";
        cin >> num >> denom;
        try
        {
            if (denom)
            {
                cout << "(a/b): " << (num / (float)denom) << endl;
            }
            else
            {
                throw denom;
            }
        }
        catch (int &e)
        {
            cerr << "Division by ZERO!!" << endl;
        }
    }
};

namespace Q2
{
    class Arrays
    {
    private:
        int *arr;
        int size;

    public:
        Arrays(int n)
        {
            this->arr = new int[n];
            this->size = n;
        }

        void input()
        {
            cout << "Enter the elements: ";
            for (size_t i = 0; i < size; i++)
                cin >> arr[i];
        }

        void display()
        {
            for (int i = 0; i < size; i++)
                cout << arr[i] << ' ';
            cout << endl;
        }
        class what
        {
        };

        int &operator[](int indx)
        {
            if (indx < 0 || indx >= size)
            {
                throw what();
            }
            return arr[indx];
        }
    };

    void exec()
    {
        Arrays obj(5);
        obj.input();
        obj.display();
        try
        {
            obj[5] = 34;
            obj.display();

            obj[6] = -1;
            obj.display();
        }
        catch (Arrays::what)
        {
            cerr << "^~~~~ ArrayIndexOutOfBoundException" << endl;
        }
    }
};

namespace Q3
{
    class Error
    {
    public:
        void what()
        {
            cerr << "Both a and b are not > 0" << endl;
        }
    };

    class Numbers
    {
        int a, b;

    public:
        Numbers(int a, int b) : a(a), b(b)
        {
            // all are positive
            if (this->a <= 0 || this->b <= 0)
            {
                throw Error();
            }
        }

        void showData()
        {
            cout << a << ", " << b << endl;
        }
    };
    void exec()
    {
        try
        {
            int a, b;
            cout << "Enter the values of a, b: ";
            cin >> a >> b;
            Numbers num(a, b);
            num.showData();
        }
        catch (Error e)
        {
            e.what();
        }
    }
};

namespace Q4
{
    void exec()
    {
        int age;
        cout << "Enter your age ";
        cin >> age;

        try
        {
            if (age > 0 && age <= 100)
            {
                cout << "Your age is: " << age << endl;
            }
            if (age <= 0)
            {
                throw 'X';
            }
            if (age > 100)
            {
                throw age;
            }
        }
        catch (int i)
        {
            cerr << "Age is more the average human life >100" << endl;
        }
        catch (char c)
        {
            cerr << "Invalid Age" << endl;
        }
        catch (...)
        {
            cerr << "Other error" << endl;
        }
    }
};
namespace Q5
{
    class Error
    {
    public:
        void what()
        {
            cerr << "Number must be +ve" << endl;
        }
    };

    class Rethrow
    {
        int a;
        size_t factorial(int n)
        {

            if (n < 1)
            {
                throw Error();
            }

            if (n <= 2)
            {
                return n;
            }
            return n * factorial(n - 1);
        }

    public:
        Rethrow()
        {
            cout << "Enter the value between 1-10" << endl;
            cin >> a;
        }

        void findFactorial()
        {
            size_t res;
            try
            {
                res = factorial(this->a);
                cout << "Factoraial (" << this->a << "): " << res << endl;
            }
            catch (Error e)
            {
                throw;
            }
        }
    };
    void exec()
    {
        Rethrow f;

        try
        {
            f.findFactorial();
        }
        catch (Error e)
        {
            e.what();
        }
        catch (...)
        {
            cerr << "Abnormal Situation" << endl;
        }
    }
};
namespace Q6
{
    template <typename T>
    inline void swap(T &arr, int i, int j)
    {
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }

    template <typename T>
    void inputData(T &arr, int size)
    {
        cout << "enter the data" << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }

    template <typename T>
    void display(T &arr, int size)
    {
        cout << "[ ";
        int i = 0;
        do
        {
            cout << arr[i];
            i++;
        } while (i != size && printf(", "));

        cout << "]\n";
    }

    template <typename T>
    void sortIt(T &arr, int size)
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr, j, j + 1);
                }
            }
        }
    }
    void exec()
    {
        int n;
        cout << "Enter the size of the arr: ";
        cin >> n;

        int *arr = new int[n];

        inputData(arr, n);
        sortIt(arr, n);
        display(arr, n);

        float *a = new float[n];

        inputData(a, n);
        sortIt(a, n);
        display(a, n);

        delete[] arr;
        delete[] a;
    }
};
namespace Q7
{
    template <typename T>
    void display(int n, T *arr)
    {
        cout << "[ ";
        int i = 0;
        do
        {
            cout << arr[i];
            i++;
        } while (i != n && printf(", "));
        cout << "]\n";
    }
    void exec()
    {
        int arr[] = {3, 1, 5, 6, 7};
        display(5, arr);

        float a[] = {2.2, 3.45, 4.234, 6.32, 7.1};
        display(5, a);
    }
};
namespace Q8
{
    template <class T>
    class Arrays
    {
        T *arr;
        int size;

        inline void swap(int i, int j)
        {
            int t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }

    public:
        Arrays(int n)
        {
            this->size = n;
            arr = new T[n];
        }

        void inputData()
        {
            cout << "enter the data" << endl;
            for (size_t i = 0; i < size; i++)
            {
                cin >> arr[i];
            }
        }

        void display()
        {
            cout << "[ ";
            int i = 0;
            do
            {
                cout << arr[i];
                i++;
            } while (i != size && printf(", "));

            cout << "]\n";
        }

        void sortIt()
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size - i - 1; j++)
                {
                    if (arr[j] > arr[j + 1])
                    {
                        swap(j, j + 1);
                    }
                }
            }
        }

        ~Arrays()
        {
            delete[] arr;
        }
    };
    void exec()
    {
        int n;
        cout << "Enter the size of the arr: ";
        cin >> n;
        Arrays<int> obj(n);

        obj.inputData();
        obj.sortIt();
        obj.display();

        Arrays<float> obj1(n);
        obj1.inputData();
        obj1.sortIt();
        obj1.display();
    }
};
namespace Q9
{
    template <class T>
    class Array
    {
    public:
        void display(int n, T *arr)
        {
            cout << "[ ";
            int i = 0;
            do
            {
                cout << arr[i];
                i++;
            } while (i != n && printf(", "));
            cout << "]\n";
        }
    };

    void exec()
    {
        int arr[] = {3, 1, 5, 6, 7};
        Array<int> obj;
        obj.display(5, arr);

        float a[] = {2.2, 3.45, 4.234, 6.32, 7.1};
        Array<float> obj1;
        obj1.display(5, a);
    }
};

int main(int argc, char const *argv[])
{
    cout << "\n~~~~~~ Q1 ~~~~~~\n";
    Q1::exec();
    cout << "\n~~~~~~ Q2 ~~~~~~\n";
    Q2::exec();
    cout << "\n~~~~~~ Q3 ~~~~~~\n";
    Q3::exec();
    cout << "\n~~~~~~ Q4 ~~~~~~\n";
    Q4::exec();
    cout << "\n~~~~~~ Q5 ~~~~~~\n";
    Q5::exec();
    cout << "\n~~~~~~ Q6 ~~~~~~\n";
    Q6::exec();
    cout << "\n~~~~~~ Q7 ~~~~~~\n";
    Q7::exec();
    cout << "\n~~~~~~ Q8 ~~~~~~\n";
    Q8::exec();
    cout << "\n~~~~~~ Q9 ~~~~~~\n";
    Q9::exec();

    remove(argv[0]);
    return 0;
}
