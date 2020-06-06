// 演習5-4
// List5-6を書きかえて、配列aの要素の並びを逆順にしたものをbにコピーする
#include <stdio.h>

int main(void)
{
    int i;
    int a[5] = {17, 23, 36};
    // int a[5] = {0, 0, 36, 23, 17};
    int b[5];

    for (i = 4; i >= 0; i--) {
        b[i] = a[4 - i];
    }

    for (i = 0; i < 5; i++) {
        printf("%4d%4d\n", a[i], b[i]);
    }
    return 0;
}
