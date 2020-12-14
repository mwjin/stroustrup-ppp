#include "../std_lib_facilities.h"

int main() {
    double val1;
    double val2;
    double l_val;
    double s_val;
    double sum;
    double diff;
    double product;
    double ratio;

    cout << "Enter two floating-point values(Distinguished by whitespaces): ";
    cin >> val1 >> val2;
    cout << endl;

    //  Operations
    if (val1 >= val2) {
        l_val = val1;
        s_val = val2;
    }
    else {
        l_val = val2;
        s_val = val1;
    }
    sum = val1 + val2;
    diff = l_val - s_val;
    product = val1 * val2;
    ratio = val1 / val2;

    // Results
    cout << "Larger: " << l_val << endl;
    cout << "Smaller: " << s_val << endl;
    cout << "Sum: " << sum << endl;
    cout << "Diff: " << diff << endl;
    cout << "Product: " << product << endl;
    cout << "Ratio: " << ratio << endl;
}
