#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void transpose(int **p, int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // j=i+1可以避免重复交换对角线上的元素
            swap(&p[i][j], &p[j][i]);
        }
    }
}

void scan(int n, int a[n][n])
{
    printf("请输入一个%d*%d的矩阵：\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

void print(int n, int a[n][n])
{
    printf("转置后的%d*%d矩阵为：\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    int n;

    // 输入二维数组的维度
    printf("请输入二维数组的维度 n：");
    scanf("%d", &n);

    // 创建二维数组并进行赋值
    int arr[n][n];
    scan(n, arr);

    int *ptr[n];
    for (int i = 0; i < n; i++) {
        ptr[i] = arr[i]; // 指针数组的每个元素指向二维数组的每一行,即指向一维数组的首地址
    }

    // 调用 transpose 函数进行转置
    transpose((int **)ptr, n);

    print(n, arr);
}