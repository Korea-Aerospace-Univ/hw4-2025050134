#include <stdio.h>

int main(void) {
    int N;
    char c;
    
    int max_lower = 0, count_lower = 0;
    int max_digit = 0, count_digit = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf(" %c", &c); 

        if (c >= 'a' && c <= 'z') {
            count_lower++;
            if (count_lower > max_lower) {
                max_lower = count_lower;
            }
            count_digit = 0;
        }
        else if (c >= '0' && c <= '9') {
            count_digit++;
            if (count_digit > max_digit) {
                max_digit = count_digit;
            }
            count_lower = 0;
        }
        else {
            count_lower = 0;
            count_digit = 0;
        }
    }

    printf("%d\n", max_lower);
    printf("%d\n", max_digit);

    return 0;
}
