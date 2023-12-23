#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int sum = 0;
    sum = n * 12000 + (k - n / 10) * 2000;
    return sum;
}