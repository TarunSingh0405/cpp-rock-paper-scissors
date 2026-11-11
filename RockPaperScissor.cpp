#include<iostream>
#include<ctime>

char getuserchoice(char player);
char getcomputerchoice(char computer);
void gamewinner(char player , char computer);

int main()
{
    char player , computer;
    std::cout<<"ROcK PAPER SCISSOR";
    player = getuserchoice(player);
    computer=getcomputerchoice(computer);
    gamewinner(player,computer);
    return 0;
}

char getuserchoice(char player)
{
    std::cout<<"\nPlease select any one choice\n";
    std::cout<<"r : ROCK\n";
    std::cout<<"p : PAPER\n";
    std::cout<<"s : SCISSOR\n"; 
    std::cin>>player;
    std::cout<<"\nYour choice is "<<player;
    return player;
}

char getcomputerchoice(char computer)
{
    int randnum;
    srand(time(0));
    randnum=rand()%3+1;
    if(randnum==1)
    {
        computer = 'r';
    }
    else if (randnum==2)
    {
        computer = 'p';
    }
    else
    {
        computer = 's';
    }
    std::cout<<"\nComputer choice is "<<computer<<'\n';
    return computer;
}

void gamewinner(char player , char computer)
{
    switch(player)
    {
        case 'r':
        {
            if(computer == 'r')
            {
                std::cout<<"There is a tie";
            }
            else if(computer=='p')
            {
                std::cout<<"You lose";
            }
            else 
            {
                std::cout<<"You WON!!!";
            }
            break;
        }
        case 'p':
        {
            if(computer == 'p')
            {
                std::cout<<"There is a tie";
            }
            else if(computer=='s')
            {
                std::cout<<"You lose";
            }
            else 
            {
                std::cout<<"You WON!!!";
            }
            break;
        }
        case 's':
        {
            if(computer == 's')
            {
                std::cout<<"There is a tie";
            }
            else if(computer=='r')
            {
                std::cout<<"You lose";
            }
            else 
            {
                std::cout<<"You WON!!!";
            }
            break;
        }
    }
}