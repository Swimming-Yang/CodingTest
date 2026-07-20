#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;

    string num_a = to_string(a);
    string num_b = to_string(b);

    string number_a = num_a + num_b;
    string number_b = num_b + num_a;

    int answer_a = stoi(number_a);
    int answer_b = stoi(number_b);

    if (answer_a >= answer_b) {
        answer = answer_a;
    }
    else
    {
        answer = answer_b;
    }

    return answer;
}