#include <iostream>
/*programa que usa as entradas e saídas de c++*/
using namespace std;

int main()
{
    cout << "Quantas moedas de 1 centavo (pennies) voce tem ";
    int pennies;
    cin >> pennies;

    cout << "Quantas moedas de 5 centavos (nickels) voce tem ";
    int nickels;
    cin >> nickels; 

    cout << "Quantas moedas de 10 centavos (dimes) voce tem? ";
    int dimes;
    cin >> dimes;

    cout << "Quantas moedas de 25 centavos (quarters) voce tem? ";
    int quarters;
    cin >> quarters;

    double total = pennies * 0.01 + nickels * 0.05 + dimes * 0.10 + quarters * 0.25;
    cout << "O valor total e de " << total << "\n";
    return 0;
}

/*
    pode ler mais de um valor ao mesmo tempo como por exemplo:
    cin >> quarters >> dimes >> nickels;
*/