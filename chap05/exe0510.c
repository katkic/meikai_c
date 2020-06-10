// 演習5-10
// 4行3列の行列と3行4列の積を求めるプログラム
// 各構成要素の値はキーボードから読み込む

#include <stdio.h>

int main(void)
{
    int i, j, k, tmp;
    int arrA[4][3];
    int arrB[3][4];
    int arrC[4][4];

    puts("arr1の入力");
    puts("1〜10の値を入力してください。");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            do {
                printf("arrA[%d][%d] : ", i, j);
                scanf("%d", &arrA[i][j]);
                if (arrA[i][j] < 1 || 10 < arrA[i][j]) {
                    puts("不正な値が入力されました。");
                    puts("1〜10の値を入力してください。");
                }
            } while (arrA[i][j] < 1 || 10 < arrA[i][j]);
        }
    }

    puts("\narr2の入力");
    puts("1〜10の値を入力してください。");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            do {
                printf("b[%d][%d] : ", i, j);
                scanf("%d", &arrB[i][j]);
                if (arrB[i][j] < 1 || 10 < arrB[i][j])
                {
                    puts("不正な値が入力されました。");
                    puts("1〜10の値を入力してください。");
                }
            } while (arrB[i][j] < 1 || 10 < arrB[i][j]);
        }
    }

    puts("--- arrA ---");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%3d ", arrA[i][j]);
        }
        putchar('\n');
    }

    puts("\n--- arrB ---");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%3d ", arrB[i][j]);
        }
        putchar('\n');
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            arrC[i][j] = 0;
            for (k = 0; k < 3; k++) {
                arrC[i][j] += arrA[i][k] * arrB[k][j];
            }
        }
    }

    puts("\n--- arrA[4行][3列] ×  arrB[3行][4列] ---");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%3d ", arrC[i][j]);
        }
        putchar('\n');
    }

    return 0;
}
