// chap03/summary1.c
#include <stdio.h>

int main(void)
{
    int sw;

    printf("1〜3の整数を入力してください : ");
    scanf("%d", &sw);

    switch (sw) {
        case 1 :
            printf("赤\n");
            break;
        case 2:
            printf("青\n");
            break;
        case 3:
            printf("白\n");
            break;
        default :
            printf("正しい値を入力してください。\n");
            break;
    }

    return 0;
}
