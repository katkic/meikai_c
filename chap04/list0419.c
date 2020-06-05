// 右下が直角の直角二等辺三角形を表示
#include <stdio.h>

int main(void)
{
    int i, j, len;

    puts("右下直角二等辺三角形を作ります。");
    printf("短辺 : ");
    scanf("%d", &len);

    for (i = 1; i <= len; i++) {
        for (j = 1; j <= len - i; j++) {
            putchar(' ');  // 空白挿入用のループ。各行にlen - i個の空白を表示する
        }
        for (j = 1; j <= i; j++) {
            putchar('*');  // *表示用のループ。各行にi個の'*'
        }
        putchar('\n');
    }
    return 0;
}
