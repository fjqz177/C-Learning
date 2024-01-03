#include <math.h>
#include <stdio.h>

#define N 10

// 判断是否为质数
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

// 交换两个数的值
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
// 冒泡排序
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

    printf("请输入%d个自然数：\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    bubbleSort(numbers, N);

    printf("排序后的结果为：");
    for (int i = 0; i < N; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    printf("其中的质数为：");
    for (int i = 0; i < N; i++) {
        if (isPrime(numbers[i])) {
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");
}