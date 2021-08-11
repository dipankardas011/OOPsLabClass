/*Write a program to find out all roots of a quadratic equation*/
#include <iostream>
#include <cmath>
class quadratic{
public:
    quadratic(int x, int y, int z):a(x),b(y),c(z){}

    bool isImaginary(){
        return (b*b >= 4*a*c)? false:true;
    }
    void roots(){
        double r1,r2;
        long kk = b*b - 4*a*c;
        if(isImaginary()){
            double ii=std::sqrt(-kk);
            r1 = (-b )/(double)(2*a);
            r2 = (-b )/(double)(2*a);
            std::cout<<"roots :- \n\t"<<r1 <<" "<<(ii/(double)(2*a))<<"i\n"
                     <<"\t"<< r2<<" "<< -(ii/(double)(2*a))<<"i"<<std::endl;                     
        }else{
            r1 = (-b + std::sqrt(kk))/(2*a);
            r2 = (-b - std::sqrt(kk))/(2*a);
            std::cout<<"roots :- \n\t"<<r1<<"\n\t"<<r2<<std::endl;
        }
    }
private:
    int a,b,c;
};

int main(int argc, char const *argv[])
{
    std::cout<<"enter the value of constants a,b,c : ax^2 + bx + c=0\n";
    int a,b,c;
    std::cin>>a>>b>>c;
    quadratic q(a,b,c);
    q.roots();
    remove(argv[0]);
    return 0;
}
