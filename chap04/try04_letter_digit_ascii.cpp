#include "../std_lib_facilities.h"

int main() {
    // Digits
    for (char c = '0'; c <= '9'; c++)
        cout << c << '\t' << int(c) << endl;

    // Uppercase letters
    for (char c = 'A'; c <= 'Z'; c++)
        cout << c << '\t' << int(c) << endl;

    // Lowercase letters
    for (char c = 'a'; c <= 'z'; c++)
        cout << c << '\t' << int(c) << endl;
}
