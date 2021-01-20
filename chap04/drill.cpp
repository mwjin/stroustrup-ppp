#include "../std_lib_facilities.h"


int main() {
    int s = 0;
    int l = 0;
    int tmp = 0;

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
        }
    }
}
