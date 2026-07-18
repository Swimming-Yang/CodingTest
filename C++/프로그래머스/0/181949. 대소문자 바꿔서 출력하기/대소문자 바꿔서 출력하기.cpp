#include <string>
#include <iostream>
//대소문자 비교
#include <cctype>

using namespace std;

int main(void) {
    string str;
    int strlen = 0;
    
    //결과
    string result;

    cin >> str;

    strlen = str.length();

    for(int i = 0; i < strlen; i++)
    {
        char word = str[i];
        //대문자라면
        if (isupper(word))
        {
            word = tolower(word);
            result += word;
        }
        //소문자
        else
        {
            word = toupper(word);
            result += word;
        }
    }
    cout << result << endl;
    return 0;
}