#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(long long n) {
    string word = to_string(n);
    vector<int> answer;

    for (int i = size(word) - 1; i >= 0; i--) {
        char cur_char = word[i];
        int cur_num = cur_char - '0';
        answer.push_back(cur_num);
    }


    return answer;
}