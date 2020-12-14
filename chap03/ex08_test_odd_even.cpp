#include "../std_lib_facilities.h"

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << endl;

    if (n % 2 == 0)
        cout << "The value " << n << " is an even number." << endl;
    else
        cout << "The value " << n << " is an odd number." << endl;
}
