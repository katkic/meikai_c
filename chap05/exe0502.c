// 演習5-2
// List5-3を書きかえて、先頭から順に5, 4, 3, 2, 1を代入するプログラム

#include <stdio.h>

int main(void)
{
    int i, v[5], num = 5;

    for (i = 0; i < 5; i++) {
        v[i] = num--;
    }

    for (i = 0; i < 5; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }
    return 0;
}
