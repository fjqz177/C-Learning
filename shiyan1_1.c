#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("请输入三个数：\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    int max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }

    int sum = num1 + num2 + num3;
    double average = (double)sum / 3;

    printf("最大值：%d\n", max);
    printf("平均值：%f\n", average);

    return 0;
}
