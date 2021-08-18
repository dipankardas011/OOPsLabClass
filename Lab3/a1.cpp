/*WAP in C++ using the concept of nesting of function. Hint: (calling one function within another function).*/
#include <iostream>

class Out{
public:
    void val(int );
    void dis();

private:
    int n;
};

void Out::dis(){
    std::cout<<"The value: "<<n<<std::endl;
}

void Out::val(int v){
    n = v;
    dis();
}

int main(int argc, char const *argv[])
{
    Out a;
    int v;
    std::cout<<"enter a number.. ";
    std::cin>>v;
    a.val(v);
    remove(argv[0]);
    return 0;
}
