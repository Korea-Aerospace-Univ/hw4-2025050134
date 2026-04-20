#include <stdio.h>

int main(void) {
    int answer, num;

    scanf("%d", &answer);

    do {
        scanf("%d", &num);

        if (num > answer) {
            printf("%d>?\n", num);
        } else if (num < answer) {
            printf("%d<?\n", num);
        } else {
            printf("%d==?\n", num);
            printf("%d\n", num);
        }
    } while (num != answer);

    return 0;
}
