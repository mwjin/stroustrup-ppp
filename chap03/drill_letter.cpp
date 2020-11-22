#include "../std_lib_facilities.h"

int main()
{
    string first_name;
    string friend_name;
    char friend_sex = 0;
    string friend_obj;

    // Initial variable settings by these prompts
    cout << "Enter the name of the person you want to write to: ";
    cin >> first_name;
    cout << "Enter the name of the friend whose safety you want to ask for: ";
    cin >> friend_name;
    cout << "Enter the sex of the friend (m (male) or f (female)): ";
    cin >> friend_sex;
    friend_obj = (friend_sex == 'm') ? "him" : "her";
    cout << endl;

    // Header
    cout << "Dear, " << first_name << endl;
    cout << endl;
    
    // Introduction (greeting)
    cout << "  How have you been? " << "Hope you are doing well." << endl;
    cout << endl;

    // Main purpose
    cout << "I would like to ask a question. ";
    cout << "Have you seen " << friend_name << " lately?" << endl;
    cout << "If you see " << friend_name << " please ask " << friend_obj;
    cout << " to call me." << endl;
}
