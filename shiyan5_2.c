#include <stdio.h>

int fac(int n)
{
    if (n < 0) {
        printf("n<0,����!");
    } else if (n == 0 || n == 1) {
        return 1;
    } else {
        return fac(n - 1) * n;
    }
}

void main()
{
    int n;
    printf("������һ��������");
    scanf("%d", &n);
    printf("%d!=%d\n", n, fac(n));
}