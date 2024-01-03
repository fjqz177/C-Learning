#include <stdio.h>

int main()
{
    char a;

    printf("请输入一个小写字母：\n");
    scanf("%c", &a);

    char b = a - 32;

    printf("转换后的大写字母为：%c\n", b);

    return 0;
}
