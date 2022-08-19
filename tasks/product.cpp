#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

void getProductInformation(
    string &productName, 
    float &productQuantity, 
    float &productPricePerKg, 
    string &currency
)
{   
    cout << "Which product you want to buy?" << endl;
    getline(cin, productName);
    fflush(stdin);
    cout << "Which quantity of product you want to buy?" << endl;
    cin >> productQuantity;
    do
    {
        cout << "Which currency you want to use to buy this product?" << endl;
        cout << "Options are: USD, EUR, MDL" << endl;
        cin >> currency;
        if (currency != "USD" && currency != "EUR" && currency != "MDL")
        {
            cout << "There is not such currency" << endl;
        } 
        fflush(stdin);
    } while (currency != "USD" && currency != "EUR" && currency != "MDL");
    cout << "Which is the price of " << productName << " per kg in " << currency << "?"  << endl;
    cin >> productPricePerKg;
    
    cout << "That is the price of a kg of " << productName << endl; 
}

float roundMoney(float number)
{
    float value = (int)(number * 100 + .5);
    return (float)value / 100;
}

float calculateTotalProductPrice(float productPricePerKg, float productQuantity)
{
    return roundMoney(productQuantity * productPricePerKg);
    
}

int main()
{
    string productName;
    float productQuantity;
    float productPricePerKg;
    string currency;
    
    getProductInformation(productName, productQuantity, productPricePerKg, currency);
    cout << "Product: " << productName << endl;
    cout << "Quantity: " << productQuantity << endl;
    cout << "Price per kg: " << productPricePerKg << endl;
    cout << "Total price: " << calculateTotalProductPrice(productPricePerKg, productQuantity) << " " << currency << endl; 
}