#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

// 定义人员结构体
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
    printf("请输入人员数量：");
    scanf("%d", &numPersons);

    struct Person *persons = (struct Person *)malloc(numPersons * sizeof(struct Person));

    // 输入人员数据
    for (int i = 0; i < numPersons; i++) {
        printf("\n请输入第 %d 个人员的姓名：", i + 1);
        scanf("%s", persons[i].name);

        printf("请输入第 %d 个人员的年龄：", i + 1);
        scanf("%d", &persons[i].age);

        printf("请输入第 %d 个人员的职业（教师/学生）：", i + 1);
        scanf("%s", persons[i].occupation);

        if (strcmp(persons[i].occupation, "教师") == 0) {
            printf("请输入第 %d 个教师的系部名称：", i + 1);
            scanf("%s", persons[i].unit.department);
        } else if (strcmp(persons[i].occupation, "学生") == 0) {
            printf("请输入第 %d 个学生的班级编号：", i + 1);
            scanf("%d", &persons[i].unit.classNumber);
        }
    }

    // 输出表格
    printf("\n姓名\t年龄\t职业\t\t单位\n");
    for (int i = 0; i < numPersons; i++) {
        printf("%s\t%d\t%s\t\t", persons[i].name, persons[i].age, persons[i].occupation);

        if (strcmp(persons[i].occupation, "教师") == 0) {
            printf("%s", persons[i].unit.department);
        } else if (strcmp(persons[i].occupation, "学生") == 0) {
            printf("%d", persons[i].unit.classNumber);
        }

        printf("\n");
    }

    free(persons);

    return 0;
}