#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    int answer = 0;
    //ineq 가 '<' 인 경우
    if (ineq == "<") {

        //'<'면서 = 인경우
        if (eq == "=") {
            if (n <= m) 
            {
                answer = 1;
            }
            else 
            {
                answer = 0;
            }
        }

        if (eq == "!") {
            if (n < m) answer = 1;
            else answer = 0;
        }
    }

    //ineq 가 '>' 인 경우
    else if (ineq == ">") {

        //'>'면서 = 인경우
        if (eq == "=") {
            if (n >= m)
            {
                answer = 1;
            }
            else
            {
                answer = 0;
            }
            
        }

        if (eq == "!") {
            if (n > m) answer = 1;
            else answer = 0;
        }
    }

    return answer;

}