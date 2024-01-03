#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

// ���忼���ṹ��
struct ExamScore
{
    int studentID;
    char name[MAX_NAME_LENGTH];
    int chineseScore;
    int mathScore;
    int englishScore;
    int totalScore;
};

// �ȽϺ���������qsort����
int compare(const void *a, const void *b)
{
    struct ExamScore *scoreA = (struct ExamScore *)a;
    struct ExamScore *scoreB = (struct ExamScore *)b;

    // �Ƚ��ܷ�
    if (scoreA->totalScore != scoreB->totalScore) {
        return scoreB->totalScore - scoreA->totalScore;
    }

    // �Ƚ����ĳɼ�
    if (scoreA->chineseScore != scoreB->chineseScore) {
        return scoreB->chineseScore - scoreA->chineseScore;
    }

    // �Ƚ���ѧ�ɼ�
    if (scoreA->mathScore != scoreB->mathScore) {
        return scoreB->mathScore - scoreA->mathScore;
    }

    // �Ƚ�Ӣ��ɼ�
    return scoreB->englishScore - scoreA->englishScore;
}

void main()
{
    int sdudentNum;
    printf("�����뿼��������");
    scanf("%d", &sdudentNum);

    struct ExamScore scores[sdudentNum];

    for (int i = 0; i < sdudentNum; i++) {
        printf("�����뿼��%d��ѧ�ţ�", i + 1);
        scanf("%d", &scores[i].studentID);

        printf("�����뿼��%d��������", i + 1);
        scanf("%s", scores[i].name);

        printf("�����뿼��%d�����ĳɼ���", i + 1);
        scanf("%d", &scores[i].chineseScore);

        printf("�����뿼��%d����ѧ�ɼ���", i + 1);
        scanf("%d", &scores[i].mathScore);

        printf("�����뿼��%d��Ӣ��ɼ���", i + 1);
        scanf("%d", &scores[i].englishScore);

        printf("\n");

        scores[i].totalScore = scores[i].chineseScore + scores[i].mathScore + scores[i].englishScore;
    }

    // ����Ҫ���������
    qsort(scores, 2, sizeof(struct ExamScore), compare);

    // ���������
    printf("\n��������\n");
    for (int i = 0; i < 2; i++) {
        printf("ѧ�ţ�%d\n", scores[i].studentID);
        printf("������%s\n", scores[i].name);
        printf("���ĳɼ���%d\n", scores[i].chineseScore);
        printf("��ѧ�ɼ���%d\n", scores[i].mathScore);
        printf("Ӣ��ɼ���%d\n", scores[i].englishScore);
        printf("�ܷ֣�%d\n", scores[i].totalScore);
        printf("\n");
    }
}