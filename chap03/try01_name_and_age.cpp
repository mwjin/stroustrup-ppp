# include "../std_lib_facilities.h"

int main() {
    cout << "Please enter your first name and age\n";
    string first_name = "???";  // "???" means the first name is unknown.
    double age = 0.0;           // 0.0 means the age is unknown.
    cin >> first_name >> age;

    double age_month = age * 12;
    cout << "Hello, " << first_name << " (age " << age_month << " months)\n";
}
