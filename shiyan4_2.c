#include <stdio.h>

#define N_MIN 6
#define N_MAX 10

// 计算杨辉三角
void calculateYanghuiTriangle(int rows, int triangle[rows][rows])
{
    // 第一列和对角线上的值都为1
    // 其他位置的值为上一行左右两个数之和
    // i表示行，j表示列

    // 第i行
    for (int i = 0; i < rows; i++) {
        // 第j列
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                triangle[i][j] = 1; // 第一列和对角线上的值都为1
            } else {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j]; // 其他位置的值为上一行左右两个数之和
            }
        }
    }
}

// 打印杨辉三角
void printYanghuiTriangle(int rows)
{
    int triangle[rows][rows];
    calculateYanghuiTriangle(rows, triangle);

    // 打印杨辉三角
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }
}

// 打印杨辉三角指定行
int calculateYanghuiLine(int row, int x)
{
    int triangle[row][row];
    calculateYanghuiTriangle(row, triangle);
    printf("杨辉三角的第%d行第%d列为：\n", row, x);
    printf("%d ", triangle[row - 1][x - 1]);
    printf("\n");
}

void main()
{
    // 打印杨辉三角
    for (int i = N_MIN; i <= N_MAX; i++) {
        printf("第%d行：\n", i);
        printYanghuiTriangle(i);
        printf("\n");
    }

    // 计算指定行列的值
    calculateYanghuiLine(10, 5);
    calculateYanghuiLine(50, 25);
}