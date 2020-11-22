#include "../std_lib_facilities.h"

int main()
{
    string first_name;
    string friend_name;
    char friend_sex = 0;
    string friend_obj;
    int age = 0;

    // Initial variable settings by these prompts
    cout << "Enter the name of the person you want to write to: ";
    cin >> first_name;
    cout << "Enter the name of the friend whose safety you want to ask for: ";
    cin >> friend_name;
    cout << "Enter the sex of the friend (m (male) or f (female)): ";
    cin >> friend_sex;
    friend_obj = (friend_sex == 'm') ? "him" : "her";
    cout << "Enter the age of the recipient: ";
    cin >> age;
    
    // Validity check for the recipient's age
    if (age <= 0 || age >= 110)
        error("you're kidding!");
    
    // Header
    cout << endl;
    cout << "Dear, " << first_name << endl;
    cout << endl;
    
    // Introduction (greeting)
    cout << "  How have you been? " << "Hope you are doing well." << endl;
    cout << endl;

    // Main text
    cout << "I would like to ask a question. ";
    cout << "Have you seen " << friend_name << " lately? ";
    cout << "If you see " << friend_name << " please ask " << friend_obj;
    cout << " to call me." << endl;
    cout << "I hear you just had a birthday and you are "; 
    cout << age << " years old.";

    if (age < 12)
        cout << " Next year you will be " << age + 1 << ".";
    else if (age == 17)
        cout << " Next year you will be able to vote.";
    else if (age > 70)
        cout << " I hope you are enjoying retirement.";

    cout << endl;
}
