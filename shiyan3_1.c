#include <stdio.h>

void main()
{
    int a, n, i, t = 0, sum = 0;
    scanf("%d %d", &a, &t);
    for (i = 0; i < t; i++) {
        sum += a;
        a = a * 10 + a;
    }
    printf("%d", sum);
}