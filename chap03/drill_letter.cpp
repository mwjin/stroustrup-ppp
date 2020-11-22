#include "../std_lib_facilities.h"

int main()
{
    string first_name;
    string friend_name;

    // Prompts for the variables
    cout << "Enter the name of the person you want to write to: ";
    cin >> first_name;
    cout << "Enter the name of the friend whose safety you want to ask for: ";
    cin >> friend_name;

    // Header
    cout << "Dear, " << first_name << endl;
    cout << endl;
    
    // Introduction (greeting)
    cout << "  How have you been? " << "Hope you are doing well." << endl;
    cout << endl;

    // Main purpose
    cout << "I would like to ask a question. ";
    cout << "Have you seen " << friend_name << " lately?" << endl;
}
