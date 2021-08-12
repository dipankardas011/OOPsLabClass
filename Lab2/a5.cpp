/*Write a program in to check whether a number is prime or not*/
#include <iostream>

int main(int argc, char const *argv[])
{
    int n;
    std::cin>>n;
    int flag=0;
    if(n==1){
        std::cout<<"It's a composite number\n";
        return 0;
    }
    for(int i=2;i<n;i++)
        if(n%i==0)
        {
            flag=1;
            break;
        }

    if(flag)
        std::cout<<"It's a composite number\n";
    else
        std::cout<<"It's a prime number\n";
    remove(argv[0]);
    return 0;
}
