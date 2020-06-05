// 演習4-23-2
// List4-19を書きかえて、右上側が直角となる直角二等辺三角形を表示するプログラム
#include <stdio.h>

int main(void)
{
    int i, j, len;

    puts("右上直角二等辺三角形を作ります。");
    printf("短辺 : ");
    scanf("%d", &len);

    for (i = len; i >= 1; i--) {
        for (j = 1; j <= len - i; j++) {
            putchar(' '); // 空白挿入用のループ。各行にlen - i個の空白を表示する
        }
        for (j = 1; j <= i; j++) {
            putchar('*'); // *表示用のループ。各行にi個の'*'を表示する
        }
        putchar('\n');
    }
    return 0;
}
