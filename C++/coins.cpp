#include <iostream>

using namespace std;

int main()
{
    int pennies = 8;
    int dimes = 4;
    int quarters = 3;

    double total = pennies * 0.01 + dimes * 0.10 + quarters * 0.25;
    /*valor total das moedas*/

    cout << "Valor total = " << total << "\n";
    return 0;
}