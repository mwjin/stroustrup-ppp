#include "../std_lib_facilities.h"

int main() {
    constexpr double yen_per_dollar = 103.02;
    constexpr double kroner_per_dollar = 8.59;
    constexpr double pound_per_dollar = 0.74;
    double price = 0.0;
    char unit = 'a';

    cout << "Please enter a price followed by a unit (y, k, or p):" << endl;
    cin >> price >> unit;

    if (unit == 'y')
        cout << price << " yen == " << price / yen_per_dollar << " USD"; 
    else if (unit == 'k')
        cout << price << " kroner == " << price / kroner_per_dollar << " USD"; 
    else if (unit == 'p')
        cout << price << " pounds == " << price / pound_per_dollar << " USD";
    else
        cout << "Sorry, this program does not know the unit called " << unit;
    cout << endl;
}
