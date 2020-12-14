#include "../std_lib_facilities.h"

int main() {
    string val1;
    string val2;
    string val3;
    string tmp;

    cout << "Enter three string values (Distinguished by whitespaces): ";
    cin >> val1 >> val2 >> val3;
    cout << endl;

    // Sort the first two strings (in ascending order)
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
