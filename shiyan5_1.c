#include <stdio.h>

void transpose(int a[3][3])
{
    int i, j, t;
    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 3; j++) {
            t = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = t;
        }
    }
}

void scan(int a[3][3])
{
    int i, j;
    printf("������һ��3*3�ľ���\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

void print(int a[3][3])
{
    int i, j;
    printf("ת�ú�ľ���Ϊ��\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[3][3], i, j;
    scan(a);
    transpose(a);
    print(a);
    return 0;
}