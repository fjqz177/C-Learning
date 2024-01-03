#include <stdio.h>

double add     (double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide  (double a, double b) { return a / b; }

void main()
{
    double num1, num2;
    double result;

    // 函数指针数组
    double (*operation[4])(double, double) = {add, subtract, multiply, divide};

    printf("输入你要进行运算的两个数字: ");
    scanf("%lf %lf", &num1, &num2);

    for (int i = 0; i < 4; i++) {
        // 调用函数指针
        result = operation[i](num1, num2);

        switch (i) {
        case 0:
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case 1:
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case 2:
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case 3:
            printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            break;
        }
    }
}
