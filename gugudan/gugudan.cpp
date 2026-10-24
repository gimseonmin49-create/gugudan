#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int dan;
    printf("단을 입력하세요: ");
    scanf("%d", &dan);

    for (int i = 1; i <= 9; i++) {
        printf("%d x %d = %d\n", dan, i, dan * i);
    }
    return 0;
}