#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

bool div2(int number){
    return number % 2 == 0;
}

bool div7(int number){
    return number % 7 == 0;
}

int main() 
{
    cout << "First five numbers that can be divided by 2 and 7 in interval of 0 and 1000:" << endl;
    int founded = 0; 
    int number = 0;
    while (founded < 5 && number < 1000)
    {
        if(div2(number) && div7(number)){
            founded = founded + 1;
            cout << number << endl;
        }
        number++;
    }

    cout << "Last five numbers that can be divided by 2 and 7 in interval of 0 and 1000::" << endl;
    founded = 0;
    number = 1000;
    while (founded < 5 && number > 0)
    {
        if(div2(number) && div7(number)){
            founded = founded + 1;
            cout << number << endl;
        }
        number--;
    }
    
}