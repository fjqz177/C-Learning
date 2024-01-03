#include <stdio.h>

void main()
{
    double p, w, d, f;
    int sl, s;
    printf("请输入路程：");
    scanf("%d", &s);
    printf("请输入重量：");
    scanf("%lf", &w);
    printf("请输入价格：");
    scanf("%lf", &p);

    if (3000 <= s) {
        sl = 12;
    } else {
        sl = s / 250;
    }

    switch (sl) {
    case 0:
        d = 0;
        break;
    case 1:
        d = 0.02;
        break;
    case 2:
    case 3:
        d = 0.05;
        break;
    case 4:
    case 5:
    case 6:
    case 7:
        d = 0.08;
        break;
    case 8:
    case 9:
    case 10:
    case 11:
        d = 0.1;
        break;
    case 12:
        d = 0.15;
        break;
    }
    f = p * w * s * (1 - d);
    printf("运费为：%lf\n", f);
}
