/*table is given 

Name | Runs | Innings | times not out
--|--|--|--
KL Rahul | 3230 | 60 | 18
Rohit sharma | 8430 | 120 | 15
.. | .. | .. | ..
WAP using parametrized constructor to 
i. read the figures
ii. calculate the batting average
iii. print the complete table in the descending order of the average by including average
*/
#include <iostream>
#include <string>
#include <algorithm>
using std::cin;
using std::endl;
using std::cout;
#define N 3


class Cricket{
    std::string name;
    int runs;
    int inns;
    int timesNotOut;
    float battingAverage;
public:
    Cricket(){
        name = "";
        runs=0;
        inns=0;
        timesNotOut=0;
        battingAverage=0.0f;
    }
    Cricket(std::string n, int r, int i, int tOut):
        name(n),runs(r),inns(i),timesNotOut(tOut){
            battingAverage = float(runs) / (inns-timesNotOut);
        }
    void display(){
        cout<<"| "<<name<<" | "<<runs<<" | "<<inns<<" | "<<timesNotOut<<" | "<<battingAverage<< " |"<<endl;
    }

    friend bool cmp(Cricket &, Cricket&);
};


bool cmp(Cricket& a, Cricket& b){
    return a.battingAverage > b.battingAverage;
}

int main(int argc, char** argv) {
    Cricket *cc = new Cricket[N];
    cc[0] = Cricket("Rohit sharma", 8430, 120, 15);
    cc[1] = Cricket("K.L. Rahul", 3230, 60, 18);
    cc[2] = Cricket("Virat Kohli", 10030, 200, 21);
    /*
    ..
    ...
    cc[N-1] = ............
     */
    std::sort(cc, cc+N, cmp);
    cout<<"|Name | Runs | Inns | Not Out | battingAverage |\n";
    for(int i=0;i<N;i++)
    {
        cc[i].display();
    }
    
    remove(argv[0]);
    return EXIT_SUCCESS;
}