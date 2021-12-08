/**
 * @wrong we have to do it using function template
*/
#include <iostream>
using namespace std;

template <typename T>
void display(T *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

template <typename T>
void sortit(T *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(int argc, char **argv)
{
    int arr[] = {4,6,1,2,3};
    int n1 = 5;
    sortit<int>(arr, n1);
    display<int>(arr, n1);

    float arr1[] = {5.4, 6.7, 1.2, 10.1, 0.5 };
    int n2 = 5;
    sortit<float>(arr1, n2);
    display<float>(arr1, n2);
    remove(argv[0]);
    return EXIT_SUCCESS;
}