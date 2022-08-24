#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int  main()
{
    int factorialNum;
    cout << "Which number you want to multiple by factorial?" << endl;
    cin >> factorialNum;
    int i = factorialNum - 1;
    fflush(stdin);
    while (i > 1)
    {
        factorialNum *= i;
        i--;
    }
    cout << factorialNum;
}