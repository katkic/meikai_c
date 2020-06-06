// 演習5-3
// List5-5を書きかえて、先頭から順に5, 4, 3, 2, 1で初期化するプログラム
#include <stdio.h>

int main(void)
{
    int i;
    int v[5] = {5, 4, 3, 2, 1};

    for (i = 0; i < 5; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }
    return 0;
}
