#include "../std_lib_facilities.h"


int main() {
    vector<string> dislike_words = {"bad", "sad", "unlucky", "tired"};

    for (string temp; cin >> temp;) {
        for (string disliked : dislike_words) {
            if (temp == disliked) {
                temp = "BLEEP";
                break;
            }
        }
        cout << temp << endl;
    }
}
