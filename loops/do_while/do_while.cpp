#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    string password = "helloworld";
    string guess;   
    do
    {
        cout << "Guess my password: ";
        cin >> guess;
    } while (password != guess);
}