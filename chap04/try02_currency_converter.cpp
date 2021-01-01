#include "../std_lib_facilities.h"

int main() {
    constexpr double yen_per_dollar = 103.02;
    constexpr double kroner_per_dollar = 8.59;
    constexpr double pound_per_dollar = 0.74;
    constexpr double yuan_per_dollar = 6.53;
    double price = 0.0;
    char unit = 'a';

    cout << "Please enter a price followed by a unit (y, k, p, or u):" << endl;
    cin >> price >> unit;
    
    switch (unit) {
    case 'y':
        cout << price << " yen == " << price / yen_per_dollar << " USD";
        break;
    case 'k':
        cout << price << " kroner == " << price / kroner_per_dollar << " USD";
        break;
    case 'p':
        cout << price << " pounds == " << price / pound_per_dollar << " USD";
        break;
    case 'u':
        cout << price << " yuan == " << price / yuan_per_dollar << " USD";
        break;
    default:
        cout << "Sorry, this program does not know the unit called " << unit;
        break;
    }
    cout << endl;
}
