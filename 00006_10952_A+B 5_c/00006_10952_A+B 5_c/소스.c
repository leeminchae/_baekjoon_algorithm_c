#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) == 2) {
        if (a == 0 & b == 0) {
            break;
        }
        printf("%d\n", a + b);
    }
}