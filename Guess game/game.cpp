#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using std::string;
using std::cout;
using std::cin;
using std::endl;

void game()
{
    int random = rand() % 251;
    cout << "Let's start the game!" << endl;
    //cout << "The number you got is: " << random << endl;
    
    int guessNum;
    do
    {
        cout << "Guess the random number: " << endl;
        cin >> guessNum;
        if (guessNum == random)
        {
            cout << "You guessed the number, congratulations!" << endl;
        } 
        else if(guessNum < random) 
        {
            cout << "Your number is lower than guessing number!" << endl;
        } 
        else
        {
            cout << "Your number is higher than guessing number!" << endl;
        }
    } while(guessNum != random);    
}

int main()
{
    srand(time(NULL));
    int choice;
    do
    {
        cout << "Choose one of the posible options: " << endl;
        cout << "0. Quit game" << endl << "1. Play game" <<  endl;
        cin >> choice;

        switch (choice)
        {
            case 0:
                cout << "Game ending((";
                return 0;
            case 1:
                game();
                break;
        }
    } while (choice != 0);
}