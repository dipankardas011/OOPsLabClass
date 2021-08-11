/*Write a program to find out the prime factors of a number entered through keyboard
by using a user define function for this.*/
#include <iostream>

bool isPrime(int n, int i=2){
    if(i==n){
        return true;
    }

    if(n%i==0){
        return false;
    }
    return isPrime(n,i+1);
}

void findFactors(int n){
    if(n<=1){
        std::cout<<"It has no prime factors!!\n";
    }
    for(int i=2;i<=n;i++){
        if( n%i==0 && isPrime(i) ){
            std::cout<<"prime factor: "<<i<<std::endl;
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;
    std::cin>>n;
    findFactors(n);
    remove(argv[0]);
    return 0;
}
