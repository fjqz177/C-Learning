#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

// 定义考生结构体
struct ExamScore
{
    int studentID;
    char name[MAX_NAME_LENGTH];
    int chineseScore;
    int mathScore;
    int englishScore;
    int totalScore;
};

// 比较函数，用于qsort排序
int compare(const void *a, const void *b)
{
    struct ExamScore *scoreA = (struct ExamScore *)a;
    struct ExamScore *scoreB = (struct ExamScore *)b;

    // 比较总分
    if (scoreA->totalScore != scoreB->totalScore) {
        return scoreB->totalScore - scoreA->totalScore;
    }

    // 比较语文成绩
    if (scoreA->chineseScore != scoreB->chineseScore) {
        return scoreB->chineseScore - scoreA->chineseScore;
    }

    // 比较数学成绩
    if (scoreA->mathScore != scoreB->mathScore) {
        return scoreB->mathScore - scoreA->mathScore;
    }

    // 比较英语成绩
    return scoreB->englishScore - scoreA->englishScore;
}

void main()
{
    int sdudentNum;
    printf("请输入考生数量：");
    scanf("%d", &sdudentNum);

    struct ExamScore scores[sdudentNum];

    for (int i = 0; i < sdudentNum; i++) {
        printf("请输入考生%d的学号：", i + 1);
        scanf("%d", &scores[i].studentID);

        printf("请输入考生%d的姓名：", i + 1);
        scanf("%s", scores[i].name);

        printf("请输入考生%d的语文成绩：", i + 1);
        scanf("%d", &scores[i].chineseScore);

        printf("请输入考生%d的数学成绩：", i + 1);
        scanf("%d", &scores[i].mathScore);

        printf("请输入考生%d的英语成绩：", i + 1);
        scanf("%d", &scores[i].englishScore);

        printf("\n");

        scores[i].totalScore = scores[i].chineseScore + scores[i].mathScore + scores[i].englishScore;
    }

    // 按照要求进行排序
    qsort(scores, 2, sizeof(struct ExamScore), compare);

    // 输出排序结果
    printf("\n排序结果：\n");
    for (int i = 0; i < 2; i++) {
        printf("学号：%d\n", scores[i].studentID);
        printf("姓名：%s\n", scores[i].name);
        printf("语文成绩：%d\n", scores[i].chineseScore);
        printf("数学成绩：%d\n", scores[i].mathScore);
        printf("英语成绩：%d\n", scores[i].englishScore);
        printf("总分：%d\n", scores[i].totalScore);
        printf("\n");
    }
}