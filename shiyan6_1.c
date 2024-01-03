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
        for (int j = i + 1; j < n; j++) { // j=i+1���Ա����ظ������Խ����ϵ�Ԫ��
            swap(&p[i][j], &p[j][i]);
        }
    }
}

void scan(int n, int a[n][n])
{
    printf("������һ��%d*%d�ľ���\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

void print(int n, int a[n][n])
{
    printf("ת�ú��%d*%d����Ϊ��\n", n, n);
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

    // �����ά�����ά��
    printf("�������ά�����ά�� n��");
    scanf("%d", &n);

    // ������ά���鲢���и�ֵ
    int arr[n][n];
    scan(n, arr);

    int *ptr[n];
    for (int i = 0; i < n; i++) {
        ptr[i] = arr[i]; // ָ�������ÿ��Ԫ��ָ���ά�����ÿһ��,��ָ��һά������׵�ַ
    }

    // ���� transpose ��������ת��
    transpose((int **)ptr, n);

    print(n, arr);
}