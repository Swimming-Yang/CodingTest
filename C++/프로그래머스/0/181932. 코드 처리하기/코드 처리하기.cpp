#include <iostream>
#include <string>

using namespace std;

int modeChange(int cur_mode) {
    cur_mode = (cur_mode == 0) ? 1 : 0;
    return cur_mode;
}

string solution(string code) {
    string answer = "";
    //현재 모드를 저장할 변수
    int cur_mode = 0;

    for (int i = 0; i < code.size(); i++) {
        char cur_word = code[i];
        //문자가 1이면 모드 변경 함수 호출
        if (cur_word == '1') cur_mode = modeChange(cur_mode);

        else if (cur_mode == 0) {
            if (i % 2 == 0) {
                answer += cur_word;
            }
        }

        else if (cur_mode == 1) {
            if (i % 2 != 0) {
                answer += cur_word;
            }
        }
    }

    if (answer.empty())
        return "EMPTY";

    return answer;
}