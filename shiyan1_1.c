#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("��������������\n");
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

    printf("���ֵ��%d\n", max);
    printf("ƽ��ֵ��%f\n", average);

    return 0;
}
