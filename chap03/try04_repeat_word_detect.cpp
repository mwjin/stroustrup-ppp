# include "../std_lib_facilities.h"

int main()
{
    string prev = " ";
    string curr;

    while (cin >> curr) {
        if (prev == curr)
            cout << "Repeated word: " << curr << '\n';
        prev = curr;
    }
}
