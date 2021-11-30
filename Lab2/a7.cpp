/*WAP in C++ to show the use of ‘Dynamic Memory Allocation and deallocation’ using
the ‘new’ and ‘delete’ operator.*/
#include <iostream>

int main(int argc, char const *argv[])
{
    int *arr;
    int n;
    printf("enter n.. ");
    scanf("%d",&n);

    arr = new int[n];

    for(int i=0;i<n;i++)
        std::cin>>arr[i];

    printf("Entered successfully\n");
    delete[] arr;
    printf("deallocated successfully\n");
    remove(argv[0]);
    return 0;
}
