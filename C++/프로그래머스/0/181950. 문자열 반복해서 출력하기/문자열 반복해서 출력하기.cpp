#include <string>
#include <iostream>

using namespace std;

int main(void) {
    //입력을 받음
    string str;
    int n;
    // 띄어쓰기로 입력받기
    cin >> str >> n;

    //결과 문자배열
    string result = "";
    for(int i = 0; i < n; i++)
    {
        result += str;
    }

    cout << result << endl;
    return 0;
}