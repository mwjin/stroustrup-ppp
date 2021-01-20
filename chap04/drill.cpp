#include "../std_lib_facilities.h"


int main() {
    double s = 0.0;
    double l = 0.0;
    double num = 0.0;
    bool first_read = true;

    while (cin >> num) {
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
    }
}
