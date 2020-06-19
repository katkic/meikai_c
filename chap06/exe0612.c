// 演習6-12
// 4行3列の行列aと3行4列の行列bの積を、4行4列の行列cに格納する関数を作成する
// void mat_mul(const int a[4][3], const int b[3][4], int c[4][4]) {}
#include <stdio.h>

void mat_mul(const int a[4][3], const int b[3][4], int c[4][4])
{
    int i, j, k;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            int tmp = 0;
            for (k = 0; k < 3; k++) {
                tmp += a[i][k] * b[k][j];
                // printf("%2d *%2d = %2d", a[i][k], b[k][j], a[i][k] * b[k][j]);
                // putchar('\n');
            }
            c[i][j] = tmp;
            // printf("c[%d][%d] = %2d\n", i, j, tmp);
            // printf("---------------\n");
            // putchar('\n');
        }
    }
}

int main(void)
{
    int i, j;
    int a[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {1, 2, 3}
    };
    int b[3][4] = {
        {5, 6, 7, 8},
        {9, 1, 2, 3},
        {4, 5, 6, 7}
    };
    int c[4][4];

    mat_mul(a, b, c);

    puts("４行３列の行列a");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", a[i][j]);
        }
        putchar('\n');
    }
    putchar('\n');

    puts("３行４列の行列b");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%4d", b[i][j]);
        }
        putchar('\n');
    }
    putchar('\n');

    puts("行列a ✕  行列b");
    puts("４行４列の行列c");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%4d", c[i][j]);
        }
        putchar('\n');
    }

    return 0;
}
