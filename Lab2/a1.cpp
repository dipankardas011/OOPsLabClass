/*Accept the day of the week in number and display in days using if else and switch both.*/
#include <iostream>

int main(int argc, char const *argv[])
{
    int week;
    std::cin>>week;
    /**
     * switch
    */
    switch(week){
        case 1:std::cout<<"Monday"<<std::endl;break;
        case 2:std::cout<<"Tuesday"<<std::endl;break;
        case 3:std::cout<<"Wednesday"<<std::endl;break;
        case 4:std::cout<<"Thursday"<<std::endl;break;
        case 5:std::cout<<"Friday"<<std::endl;break;
        case 6:std::cout<<"Saturday"<<std::endl;break;
        case 7:std::cout<<"Sunday"<<std::endl;break;
        default:std::cout<<"INVALID!!"<<std::endl;break;
    }

    /**
     * If
     */
    if(week==1)
        std::cout<<"Monday"<<std::endl;
    else if(week==2)
        std::cout<<"Tuesday"<<std::endl;
    else if(week==3)
        std::cout<<"Wednesday"<<std::endl;
    else if(week==4)
        std::cout<<"Thursday"<<std::endl;
    else if(week==5)
        std::cout<<"Friday"<<std::endl;
    else if(week==6)
        std::cout<<"Saturday"<<std::endl;
    else if(week==7)
        std::cout<<"Sunday"<<std::endl;
    else
        std::cout<<"INVALID!"<<std::endl;
    
    remove(argv[0]);
    return 0;
}
