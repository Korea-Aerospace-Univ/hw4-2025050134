#include <stdio.h>

int main(void) {
    int answer, num;
    int count = 0;

    scanf("%d", &answer);

    do {
        scanf("%d", &num);
        count++;

        if (num > answer) {
            printf("%d>?\n", num);
        } else if (num < answer) {
            printf("%d<?\n", num);
        } else {
            printf("%d==?\n", num);
        }
    } while (num != answer);

    printf("%d\n", count);

    return 0;
}
