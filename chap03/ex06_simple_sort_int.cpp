#include "../std_lib_facilities.h"

int main() {
    int val1;
    int val2;
    int val3;
    int tmp;

    cout << "Enter three integer values (Distinguished by whitespaces): ";
    cin >> val1 >> val2 >> val3;
    cout << endl;

    // Sort the first two integers (in ascending order)
    if (val1 > val2) {
        tmp = val1;
        val1 = val2;
        val2 = tmp;
    }

    // Insert the third one in an appropriate position
    if (val3 < val1) {
        tmp = val3;
        val3 = val2;
        val2 = val1;
        val1 = tmp;
    }
    else if (val3 < val2) {
        tmp = val3;
        val3 = val2;
        val2 = tmp;
    }

    // Print the results
    string sep = ", ";
    cout << val1 << sep << val2 << sep << val3 << endl;
}
