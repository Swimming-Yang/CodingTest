#include <string>
#include <vector>

using namespace std;

//짝수 인 경우 처리 함수
int even(int n) {
    int answer = 0;
    int current_num = 0;

    while (current_num <= n) {
        answer += (current_num * current_num);

        current_num += 2;
    }
    return answer;
}

//홀수 인 경우 처리 함수
int odd(int n) {
    int answer = 0;
    int current_num = 1;

    while (current_num <= n) {
        answer += current_num;
        current_num += 2;
    }

    return answer;
}

int solution(int n) {
    int answer = 0;

    if (n % 2 == 0) {
        answer = even(n);
    }
    else answer = odd(n);

    return answer;
}