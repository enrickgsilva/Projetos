#include <iostream>

using namespace std;

int main() 
{
    double original_price = 3E14;
    double discounted_price = original_price - 0.05;
    double discount = original_price - discounted_price;

    cout << discount << "\n";
    return 0;
}