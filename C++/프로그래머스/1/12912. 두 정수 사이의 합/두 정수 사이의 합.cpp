#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>

long long solution(int a, int b) {
    long long answer = 0;

    int max_num = std::max(a, b);
    int min_num = std::min(a, b);

        for (int cur_num = min_num; cur_num <= max_num; cur_num++)
        {
            answer += cur_num;
        }
        return answer;
    }