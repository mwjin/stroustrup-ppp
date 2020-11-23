#include "../std_lib_facilities.h"

int main()
{
    double mile = 0.0;
    double km = 0.0;

    cout << "This is a program to convert from miles to kilometers." << endl;
    cout << "Enter a number of miles: ";
    cin >> mile;
    
    km = mile * 1.609;
    cout << mile << " miles are " << km << " kilometers." << endl; 
}
