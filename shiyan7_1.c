#include <ctype.h>
#include <stdio.h>

void copyCharacters(const char *source, int m, char *destination)
{
    int i = m;
    int j = 0;

    while (source[i] != '\0') {
        if (isalnum(source[i])) {
            destination[j] = source[i];
            j++;
        }
        i++;
    }

    destination[j] = '\0';
}

void main()
{
    char sourceString[100];
    int m;

    printf("请输入字符串: ");
    fgets(sourceString, sizeof(sourceString), stdin);

    printf("输入你要分割开始的位置: ");
    scanf("%d", &m);
    m--;

    int n = 0;
    while (sourceString[n] != '\0') {
        n++;
    }

    char destinationString[100];
    copyCharacters(sourceString, m, destinationString);

    printf("复制后的字符串为: %s\n", destinationString);
}