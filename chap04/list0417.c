// 長方形を描画
#include <stdio.h>

int main(void)
{
    int i, j;
    int height, width;

    puts("長方形を作ります。");
    printf("高さ : ");
    scanf("%d", &height);
    printf("横幅 : ");
    scanf("%d", &width);

    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
