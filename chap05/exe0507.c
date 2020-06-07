// 演習5-7
// 配列に格納するデータ数と要素の値を読み込んで、その値を表示するプログラム
// 表示の形式は、全要素の値をコンマとスペースで区切ったものを { と } で囲んだものとする
// {23, 74, 9, 835}
// なお、配列の要素数は要素数をオブジェクト形式マクロとして定義しておくこと

#include <stdio.h>
#define NUMBER 10

int main(void)
{
    int i, num;
    int arr[NUMBER];

    do {
        printf("データ数 : ");
        scanf("%d", &num);
        if (num < 1 || num > NUMBER) {
            printf("1〜%dで入力してください。\n", NUMBER);
        }
    } while (num < 1 || num > NUMBER);

    for (i = 0; i < num; i++) {
        printf("%d番 : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("{%d", arr[0]);
    for (i = 1; i < num; i++) {
        printf(", %d", arr[i]);
    }
    printf("}");

    return 0;
}
