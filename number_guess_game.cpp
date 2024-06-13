#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
    string name;
    srand(0);//statement used to change the random number 
    int random= rand()%5+1;//random number generation
    int guess=0;
    int moves=0;
    int score;
    char input;
    cout<<"Enter your name:";
    cin>>name;
    do
    {
    cout<<"Enter your guess between 1 to 10";
    cin>>guess;
    if(guess==random)
    {
    cout<<"Congrats! 🎉 you guessed the correct number"<<endl;
    score++;
    }
    else if(guess<random)
    {
    cout<<"Wrong guess! ❎ you enterd a lower number!"<<endl;
    }
    else
    {
    cout<<"Wrong guess! ❎ you enterd a greater number!"<<endl;
    }
    cout<<"Would you like to try again Y/N";
    cin>>input;
    cout<<endl;
    }
    while(guess!= random);
    cout<<"Your score is:"<<score<<endl;
    cout<<"Game over"<<endl;
    
    
    
    return 0;
}
