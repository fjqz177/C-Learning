#include <math.h>
#include <stdio.h>

int main()
{
    while (1) {
        int chinese, math, english;
        double average;
        char grade;

        printf("�����뿼�������ĳɼ���");
        scanf("%d", &chinese);

        printf("�����뿼������ѧ�ɼ���");
        scanf("%d", &math);

        printf("�����뿼����Ӣ��ɼ���");
        scanf("%d", &english);

        average = round((chinese + math + english) / 3.0);

        switch ((int)average) {
        case 0 ... 59:
            grade = 'F';
            break;
        case 60 ... 69:
            grade = 'D';
            break;
        case 70 ... 79:
            grade = 'C';
            break;
        case 80 ... 89:
            grade = 'B';
            break;
        case 90 ... 100:
            grade = 'A';
            break;
        default:
            grade = 'N';
            break;
        }

        if (chinese < 60 || math < 60 || english < 60) {
            grade = 'F';
        }

        printf("�����������ɼ��ȼ�Ϊ��%c\n", grade);

        printf("�Ƿ��������Y/N��");
        char c;
        scanf(" %c", &c);
        if (c == 'N' || c == 'n') {
            break;
        }

        printf("\n");
    }

    return 0;
}