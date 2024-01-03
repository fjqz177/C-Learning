#include <stdio.h>

void decryptPassword(const char *password)
{
    printf("Ô­ÎÄ£º");
    for (int i = 0; password[i] != '\0'; i++) {
        if ('a' <= password[i] && password[i] <= 'z') {
            char decryptedChar = 'a' + ('z' - password[i]);
            printf("%c", decryptedChar);
        } else if ('A' <= password[i] && password[i] <= 'Z') {
            char decryptedChar = 'A' + ('Z' - password[i]);
            printf("%c", decryptedChar);
        } else {
            printf("%c", password[i]);
        }
    }
    printf("\n");
}

void main()
{
    const char *password = "Zyx12AbC";
    printf("ÃÜÂë£º%s\n", password);
    decryptPassword(password);
}