#include "../std_lib_facilities.h"

int main() {
    string num;

    cout << "Enter a spelled-out number: ";
    cin >> num;
    cout << endl;

    if (num == "zero")
        cout << "Corresponding digit: " << 0 << endl;
    else if (num == "one")
        cout << "Corresponding digit: " << 1 << endl;
    else if (num == "two")
        cout << "Corresponding digit: " << 2 << endl;
    else if (num == "three")
        cout << "Corresponding digit: " << 3 << endl;
    else if (num == "four")
        cout << "Corresponding digit: " << 4 << endl;
    else
        cout << "Not a number I know. What a stupid computer!" << endl;
}
