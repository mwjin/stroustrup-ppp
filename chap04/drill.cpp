#include "../std_lib_facilities.h"


int main() {
    double s = 0;
    double l = 0;
    double tmp = 0;

    while (cin >> s >> l) {
        if (s == l)
            cout << "The numbers are equal." << endl;
        else {
            if (s > l) {  // Swap
                tmp = s;
                s = l;
                l = tmp;
            }
            cout << "The smaller value is: " << s << endl;
            cout << "The larger value is: " << l << endl;

            if ((l - s) < (1.0 / 100))
                cout << "The numbers are almost equal" << endl;
        }
    }
}
