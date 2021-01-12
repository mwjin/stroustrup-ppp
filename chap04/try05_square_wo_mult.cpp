#include "../std_lib_facilities.h"


int square(int x) {
    int result = 0;

    for (int i = 0; i < abs(x); i++)
        result += x;

    if (x < 0)
        result *= -1;

    return result;
}


int main() {
    int n;
    cout << "Enter your integer: ";
    cin >> n;
    cout << "The square of your integer: " << square(n) << endl;
}
