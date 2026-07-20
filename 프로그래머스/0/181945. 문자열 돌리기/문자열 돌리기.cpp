#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        char word = str[i];
        cout << word << endl;
    }
    return 0;
}