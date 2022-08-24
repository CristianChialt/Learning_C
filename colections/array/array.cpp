#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

void showArray(int numbers[])
{
    for (int i = 0; i < 10; i++)
    {
        cout << "[" << numbers[i] << "]";
    }
    cout << endl;
    
}

int  main()
{
    int numbers[2] = {1, 2};
    // numbers[0] = 4;
    // numbers[1] = 7;
    // numbers[2] = 8;
    showArray(numbers);
    numbers[9] = 5; 
    showArray(numbers);
    cout << sizeof(numbers) / sizeof(int) <<  endl;
    cout << numbers[3];
}