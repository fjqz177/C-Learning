#include <math.h>
#include <stdio.h>

#define N 10

// �ж��Ƿ�Ϊ����
int isPrime(int num)
{
    if (num < 2) {
        return 0;
    } else if (num == 2) {
        return 1;
    } else if (num % 2 == 0) {
        return 0;
    }

    for (int i = 3, i2 = sqrt(num); i <= i2; i += 2) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

// ������������ֵ
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
// ð������
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void main()
{
    int numbers[N];

    printf("������%d����Ȼ����\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    bubbleSort(numbers, N);

    printf("�����Ľ��Ϊ��");
    for (int i = 0; i < N; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    printf("���е�����Ϊ��");
    for (int i = 0; i < N; i++) {
        if (isPrime(numbers[i])) {
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");
}