/*an election is contested by 3 candidates and the candidates are numbered from 1 to 3 
the voting is done by making the candidate number on the ballot paper WAP using constructor and destructor to 
i) cast the vote for user supplied n votes
ii) read the ballots and count the votes for each candidates*/
#include <iostream>
#include <iomanip>
using std::cin;
using std::endl;
using std::cout;

static int result[3]={0};

class Election{
    int voteID;
    public:
    Election(){
        voteID = -1;
    }
    Election(int k){
        voteID = k;
    }
    ~Election(){
        result[voteID]++;
    }
};

void votingResult(){
    cout<<"\n\tVoting as per the graph\n";
    for(int i=0;i<3;i++){
        cout<<i+1<<" | ";
        cout<<std::setw(result[i])<<std::setfill('*')<<"";
        cout<<endl;
    }
}

int main(int argc, char** argv) {
    int noOfVotes = 0;
    cout<<"Enter the Total number of votes: ";
    cin>>noOfVotes;
    int i=0;
    Election *ballot = new Election[noOfVotes];
    while(i < noOfVotes){
        //user enter the votes
        int x;
        cout<<"Enter your VOTE: ";
        cin>>x;
        ballot[i++] = Election(x-1);
    }
    votingResult();

    remove(argv[0]);
    return EXIT_SUCCESS;
}