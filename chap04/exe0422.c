// 演習4-22
// List4ー17のプログラムを書き換えて、横長の長方形を表示するプログラム
// ※二つの辺の長さを読み込んで、小さいほうを行数として、大きいほうを列数とすること
#include <stdio.h>

int main(void)
{
    int i, j;
    int height, width, tmp;

    puts("横長の長方形を作ります。");
    printf("一辺（その1）: ");
    scanf("%d", &height);
    printf("一辺（その2）: ");
    scanf("%d", &width);

    if (height > width) {
        tmp = height;
        height = width;
        width = tmp;
    }

    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
