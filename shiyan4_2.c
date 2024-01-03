#include <stdio.h>

#define N_MIN 6
#define N_MAX 10

// �����������
void calculateYanghuiTriangle(int rows, int triangle[rows][rows])
{
    // ��һ�кͶԽ����ϵ�ֵ��Ϊ1
    // ����λ�õ�ֵΪ��һ������������֮��
    // i��ʾ�У�j��ʾ��

    // ��i��
    for (int i = 0; i < rows; i++) {
        // ��j��
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                triangle[i][j] = 1; // ��һ�кͶԽ����ϵ�ֵ��Ϊ1
            } else {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j]; // ����λ�õ�ֵΪ��һ������������֮��
            }
        }
    }
}

// ��ӡ�������
void printYanghuiTriangle(int rows)
{
    int triangle[rows][rows];
    calculateYanghuiTriangle(rows, triangle);

    // ��ӡ�������
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }
}

// ��ӡ�������ָ����
int calculateYanghuiLine(int row, int x)
{
    int triangle[row][row];
    calculateYanghuiTriangle(row, triangle);
    printf("������ǵĵ�%d�е�%d��Ϊ��\n", row, x);
    printf("%d ", triangle[row - 1][x - 1]);
    printf("\n");
}

void main()
{
    // ��ӡ�������
    for (int i = N_MIN; i <= N_MAX; i++) {
        printf("��%d�У�\n", i);
        printYanghuiTriangle(i);
        printf("\n");
    }

    // ����ָ�����е�ֵ
    calculateYanghuiLine(10, 5);
    calculateYanghuiLine(50, 25);
}