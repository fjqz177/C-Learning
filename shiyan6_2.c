#include <stdio.h>

void sortArray(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int merged[])
{
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        merged[i + n2] = arr2[i];
    }
}

void scan(int n, int a[n])
{
    printf("请输入一个%d个元素的数组：\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void main()
{
    int n = 5, i;
    int arr1[n], arr2[n], merged[n + n];

    scan(n, arr1);
    scan(n, arr2);

    sortArray(arr1, n);
    sortArray(arr2, n);
    mergeArrays(arr1, n, arr2, n, merged);
    sortArray(merged, n + n);

    printf("合并后的数组为:\n");
    for (i = 0; i < n + n; i++) {
        printf("%d ", merged[i]);
    }
}