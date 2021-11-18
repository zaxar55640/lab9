#include <stdio.h>
int main() {
    int number;
    int simple = 1;
    scanf("%d", &number);
    for (int i = 2; i <= number; i++ ) {
        for (int l=2; l <= i / 2; l++)
            if ((i % l) == 0) simple = 0;
        if (simple == 1)
            printf("%d\n", i);
        simple = 1;
    }

    int month, percent;
    double sum;
    printf("Monthes:");
    scanf("%d", &month);
    printf("Percent:");
    scanf("%d", &percent);
    printf("Money:");
    scanf("%lf", &sum);
    double d;
    d = (percent / 12.0) / 100.0;
    for (int i = 0; i <= month; i++) {
        sum = sum + (sum * d);
        printf("%lf\n", sum);
    }

    return 0;
}
