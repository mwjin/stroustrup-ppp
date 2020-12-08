#include "../std_lib_facilities.h"

int main()
{
    string writer_name;
    string rcpt_name;
    int rcpt_age = 0;
    string friend_name;
    char friend_sex = 0;
    string friend_obj;

    /* Initial variable settings by these prompts */
    cout << "Enter your name: ";
    cin >> writer_name;

    cout << "Enter the name of the person you want to write to: ";
    cin >> rcpt_name;
    cout << "Enter the age of the recipient: ";
    cin >> rcpt_age;
    
    // Validity check for the recipient's age
    if (rcpt_age <= 0 || rcpt_age >= 110)
        error("you're kidding!");
    
    cout << "Enter the name of the friend whose safety you want to ask for: ";
    cin >> friend_name;
    cout << "Enter the sex of the friend (m (male) or f (female)): ";
    cin >> friend_sex;
    friend_obj = (friend_sex == 'm') ? "him" : "her";
    
    /* Header */
    cout << endl;
    cout << "Dear, " << rcpt_name << endl;
    cout << endl;
    
    /* Introduction (greeting) */
    cout << "  How have you been? " << "Hope you are doing well." << endl;
    cout << endl;

    /* Main text */
    cout << "I would like to ask a question. ";
    cout << "Have you seen " << friend_name << " lately? ";
    cout << "If you see " << friend_name << " please ask " << friend_obj;
    cout << " to call me." << endl;
    cout << "I hear you just had a birthday and you are "; 
    cout << rcpt_age << " years old.";

    if (rcpt_age < 12)
        cout << " Next year you will be " << rcpt_age + 1 << ".";
    else if (rcpt_age == 17)
        cout << " Next year you will be able to vote.";
    else if (rcpt_age > 70)
        cout << " I hope you are enjoying retirement.";

    cout << endl;

    cout << "I'm really sorry not to come over your birthday party. ";
    cout << "Next time I will be right with you. ";
    cout << "Hope to see you soon!" << endl;

    /* Wrap up */
    cout << endl;
    cout << "Yours sincerely,";
    cout << endl << endl;  // Blank lines for a signature
    cout << writer_name << endl << endl;
}
