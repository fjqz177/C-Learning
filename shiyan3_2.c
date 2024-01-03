#include <stdio.h>

void main()
{
    int i = 0, total = 0, sum = 0;
    int min = 200, max = 0;
    double average;
    for (i = 100; i <= 200; i++) {
        if (i % 3 == 0) {
            sum += i;
            total++;
            if (i < min) {
                min = i;
            }
            if (i > max) {
                max = i;
            }
        }
    }
    average = sum / total;
    printf("sum=%d\n", sum);
    printf("average=%f\n", average);
    printf("min=%d\n", min);
    printf("max=%d\n", max);
}