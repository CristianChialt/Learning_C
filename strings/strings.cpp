#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

char checkConfirmation(string question) {
    char confirmation;
    cout << question << endl;
    cout << "Y - yes | N - no" << endl;
    cin >> confirmation;      
    return confirmation;
}

void getUserName(string userName)
{
    char confirmation;
    do
    {
        cout << "What's your name?" << endl;
        getline(cin, userName);
        confirmation = checkConfirmation("Your name is " + userName + "?");
    } while (confirmation != 'Y' && confirmation != 'y');
    fflush(stdin);
}

void getUserBirthYear(int &userBirthYear)
{
    char confirmation;
    do
    {
        cout << "What's your birth year?" << endl;
        cin >> userBirthYear;
        confirmation = checkConfirmation("Your birth year is " + std::to_string(userBirthYear) + "?");
    } while (confirmation != 'Y' && confirmation != 'y');
    fflush(stdin);
}

int calculateAge(int userBirthYear, int actualYear)
{
    return actualYear - userBirthYear;
}

int selectPizzaType(string pizzaTypes[5])
{
    int selectedPizzaType;
    do
    {
        cout << "Select one of the options:" << endl;
        for (int i = 1; i <= 5; i++)
        {
            cout << (i) << " - " << pizzaTypes[i - 1] << endl;
        }
        cin >> selectedPizzaType;
    } while (selectedPizzaType < 1 || selectedPizzaType > 5);
    
    return selectedPizzaType;
}



int main()
{
    string userName;
    int userBirthYear;
    int const actualYear = 2022;
    string pizzaTypes[5] = {"Margarita", "Americana", "Four chees", "Peperoni", "Rancho"};

    getUserName(userName);
    getUserBirthYear(userBirthYear);
    cout << "Your age is ";
    int const userAge = calculateAge(userBirthYear, actualYear);
    cout << userAge << endl;
    
    if (userAge >= 18)
    {
        cout << "You are able to eat pizza!" << endl;
        int selectedPizzaType = selectPizzaType(pizzaTypes);
        cout << "You selected " << pizzaTypes[selectedPizzaType - 1];
    } else { 
        cout << "You are not able to eat pizza!";
    }
}