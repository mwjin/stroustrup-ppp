#include "../std_lib_facilities.h"

int main() {
    int penny_cnt;
    int nickel_cnt;
    int dime_cnt;
    int quarter_cnt;
    int half_dollar_cnt;
    int one_dollar_cnt;
    int total_cent = 0;

    // Inputs
    cout << "How many pennies do you have? ";
    cin >> penny_cnt;
    total_cent += penny_cnt;
    
    cout << "How many nickels do you have? ";
    cin >> nickel_cnt;
    total_cent += nickel_cnt * 5;
    
    cout << "How many dimes do you have? ";
    cin >> dime_cnt;
    total_cent += dime_cnt * 10;

    cout << "How many quarters do you have? ";
    cin >> quarter_cnt;
    total_cent += quarter_cnt * 25;

    cout << "How many half dollars do you have? ";
    cin >> half_dollar_cnt;
    total_cent += half_dollar_cnt * 50;

    cout << "How many one-dollars do you have? ";
    cin >> one_dollar_cnt;
    total_cent += one_dollar_cnt * 100;
    cout << endl;

    // Outputs
    cout << "You have " << penny_cnt << " pennies." << endl; 
    cout << "You have " << nickel_cnt << " nickels." << endl; 
    cout << "You have " << dime_cnt << " dimes." << endl; 
    cout << "You have " << quarter_cnt << " quarters." << endl; 
    cout << "You have " << half_dollar_cnt << " half dollars." << endl; 
    cout << "You have " << one_dollar_cnt << " one dollars." << endl;
    cout << "The value of all of your coins is " << total_cent 
    << " cents" << endl;
}
