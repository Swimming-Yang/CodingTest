#include <iostream>
#include <string>

using namespace std;

//거짓 (False)인 경우 처리 함수
int False(int a, int b) {
    int answer = a - b;
    return answer;
    }

//참 (true)인 경우 처리 함수
int True(int a, int b) {
    int answer = a + b;
   
    return answer;
}

int solution(int a, int b, bool flag) {
    int answer = 0;

    return flag ? True(a, b) : False(a, b);
}