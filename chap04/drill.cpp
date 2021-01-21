#include "../std_lib_facilities.h"

bool is_legal_unit(string unit) {
    return (unit == "cm" || unit == "m" || unit == "in" || unit == "ft");
}

int main() {
    double s = 0.0;
    double l = 0.0;
    double num = 0.0;
    string unit = "";
    bool first_read = true;

    // You should put a whitespace between the number and the unit 
    // so you can put the number and the unit into these variables 
    // appropriately.
    cout << "Enter your number with its unit (cm, m, in, or ft)" << endl;
    cout << "e.g. 12 cm, 2 ft, etc. (Note: the spacing is essential)" << endl;
    while (cin >> num >> unit) {
        if (!is_legal_unit(unit)) {
            cout << "The unit '" << unit << "' is illegal." << endl;
            break;
        }

        if (first_read) {  // Initialize the smallest and the largert numbers
            s = num;
            l = num;
            first_read = false;
        }
        if (s >= num) {
            s = num;
            cout << "The smallest so far" << endl;
        }
        if (l <= num) {
            l = num;
            cout << "The largest so far" << endl;
        }
        cout << endl;
    }
}
