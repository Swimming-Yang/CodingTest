#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string fi_word;
    string word = to_string(n);
    vector<int> num_list;
    for (int i = 0; i < word.size(); i++) 
    {
        //아스키를 활용하여  '-0'을 해줘야 알맞은 int값이 넘어감.
        int num = word[i] - '0';
        num_list.push_back(num);
    }

    sort(num_list.begin(), num_list.end());

    for (int i = num_list.size() - 1; i >= 0; i--) {
        string cur_word = to_string(num_list[i]);
        fi_word += cur_word;
    }

    answer = stoll(fi_word);
    return answer;
}