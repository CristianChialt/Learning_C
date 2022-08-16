#include <iostream>
#include <cmath>

double power(double base, int exponent)
{
    double powerResult = 1;
    for (int i = 0; i < exponent; i++)
    {
       powerResult = powerResult * base;
    }
    return powerResult; 
}

void printPow(double base, int exponent)
{
    double myPower = power(base, exponent);
    std::cout << "The number you got is : " << myPower << std::endl;
}

void askNum(int &base, int &exponent)
{
    std::cout << "What is the base number? : ";
    std::cin >> base;
    do
    {
        std::cout << "What is the exponent number? : ";
        std::cin >> exponent;
        if (exponent < 0)
        {
            std::cout << "Exponent can't be a negative number" << std::endl;
        }
    } while (exponent < 0);  
}

int main()
{   
    int base = 1;
    int exponent = 1;
    askNum(base, exponent);
    printPow(base, exponent);

    std::cout << "Insert any symbol to exit" << std::endl;
    std::cin >> base;
}