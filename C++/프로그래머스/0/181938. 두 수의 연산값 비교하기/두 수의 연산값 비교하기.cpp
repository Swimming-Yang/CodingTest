#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int a, int b) {
    int answer = 0;

    int number_a = 2 * a * b;
    int number_b = 0;

    string num_a = to_string(a);
    string num_b = to_string(b);

    string snumber_b = num_a + num_b;
    number_b = stoi(snumber_b);

    if (number_a == number_b) answer = number_b;
    else answer = max(number_a, number_b);
    return answer;
}