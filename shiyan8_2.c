#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

// ������Ա�ṹ��
struct Person
{
    char name[MAX_NAME_LENGTH];
    int age;
    char occupation[MAX_NAME_LENGTH];
    union
    {
        char department[MAX_NAME_LENGTH];
        int classNumber;
    } unit;
};

int main()
{
    int numPersons;
    printf("��������Ա������");
    scanf("%d", &numPersons);

    struct Person *persons = (struct Person *)malloc(numPersons * sizeof(struct Person));

    // ������Ա����
    for (int i = 0; i < numPersons; i++) {
        printf("\n������� %d ����Ա��������", i + 1);
        scanf("%s", persons[i].name);

        printf("������� %d ����Ա�����䣺", i + 1);
        scanf("%d", &persons[i].age);

        printf("������� %d ����Ա��ְҵ����ʦ/ѧ������", i + 1);
        scanf("%s", persons[i].occupation);

        if (strcmp(persons[i].occupation, "��ʦ") == 0) {
            printf("������� %d ����ʦ��ϵ�����ƣ�", i + 1);
            scanf("%s", persons[i].unit.department);
        } else if (strcmp(persons[i].occupation, "ѧ��") == 0) {
            printf("������� %d ��ѧ���İ༶��ţ�", i + 1);
            scanf("%d", &persons[i].unit.classNumber);
        }
    }

    // ������
    printf("\n����\t����\tְҵ\t\t��λ\n");
    for (int i = 0; i < numPersons; i++) {
        printf("%s\t%d\t%s\t\t", persons[i].name, persons[i].age, persons[i].occupation);

        if (strcmp(persons[i].occupation, "��ʦ") == 0) {
            printf("%s", persons[i].unit.department);
        } else if (strcmp(persons[i].occupation, "ѧ��") == 0) {
            printf("%d", persons[i].unit.classNumber);
        }

        printf("\n");
    }

    free(persons);

    return 0;
}