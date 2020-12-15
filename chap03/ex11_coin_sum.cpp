#include "../std_lib_facilities.h"

int main() {
    int penny_cnt;
    int nickel_cnt;
    int dime_cnt;
    int quarter_cnt;
    int half_dollar_cnt;
    int one_dollar_cnt;
    int total_cent = 0;
    double total_dollar = 0.0;

    // Inputs
    cout << "How many pennies do you have? ";
    cin >> penny_cnt;
    if (penny_cnt < 0) {
        cout << "The number of the coins is negative. Are you serious?";
        cout << endl;
        return 0;
    }
    total_cent += penny_cnt;
    
    cout << "How many nickels do you have? ";
    cin >> nickel_cnt;
    if (nickel_cnt < 0) {
        cout << "The number of the coins is negative. Are you serious?";
        cout << endl;
        return 0;
    }
    total_cent += nickel_cnt * 5;
    
    cout << "How many dimes do you have? ";
    cin >> dime_cnt;
    if (dime_cnt < 0) {
        cout << "The number of the coins is negative. Are you serious?"; 
        cout << endl;
        return 0;
    }
    total_cent += dime_cnt * 10;

    cout << "How many quarters do you have? ";
    cin >> quarter_cnt;
    if (quarter_cnt < 0) {
        cout << "The number of the coins is negative. Are you serious?";
        cout << endl;
        return 0;
    }
    total_cent += quarter_cnt * 25;

    cout << "How many half dollars do you have? ";
    cin >> half_dollar_cnt;
    if (half_dollar_cnt < 0) {
        cout << "The number of the coins is negative. Are you serious?";
        cout << endl;
        return 0;
    }
    total_cent += half_dollar_cnt * 50;

    cout << "How many one-dollars do you have? ";
    cin >> one_dollar_cnt;
    if (one_dollar_cnt < 0) {
        cout << "The number of the coins is negative. Are you serious?";
        cout << endl;
        return 0;
    }
    total_cent += one_dollar_cnt * 100;
    total_dollar = total_cent / 100.0;
    cout << endl;

    // Outputs
    if (penny_cnt > 0) {
        cout << "You have " << penny_cnt;
        if (penny_cnt == 1)
            cout << " penny.";
        else
            cout << " pennies.";
        cout << endl;
    }
    if (nickel_cnt > 0) {
        cout << "You have " << nickel_cnt;
        if (nickel_cnt == 1)
            cout << " nickel.";
        else
            cout << " nickels.";
        cout << endl;
    }
    if (dime_cnt > 0) {
        cout << "You have " << dime_cnt;
        if (dime_cnt == 1)
            cout << " dime.";
        else
            cout << " dimes.";
        cout << endl;
    }
    if (quarter_cnt > 0) {
        cout << "You have " << quarter_cnt;
        if (quarter_cnt == 1)
            cout << " quarter.";
        else
            cout << " quarters.";
        cout << endl;
    }
    if (half_dollar_cnt > 0) {
        cout << "You have " << half_dollar_cnt;
        if (half_dollar_cnt == 1)
            cout << " half dollar.";
        else
            cout << " half dollars.";
        cout << endl;
    }
    if (one_dollar_cnt > 0) {
        cout << "You have " << one_dollar_cnt;
        if (one_dollar_cnt == 1)
            cout << " one dollar.";
        else
            cout << " one dollars.";
        cout << endl;
    }

    cout << "The value of all of your coins is " << total_cent;
    if (total_cent > 1) 
        cout << " cents";
    else
        cout << " cent";
    cout << " ($" << total_dollar << ")." << endl;
}
