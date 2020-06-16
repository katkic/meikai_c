// 逐次探索（番兵法）
#include <stdio.h>
#define NUMBER 5  // 要素数
#define FAILED -1 // 探索失敗

// 要素数nの配列vからkeyと一致する要素を探索（番兵法)
int search(int v[], int key, int n)
{
    int i;
    v[n] = key; // 番兵を格納

    for (i = 0; v[i] != key; i++) {
        ;  // ループ本体としては、特に何も行うことがないため、空文とする
    }
    return (i < n) ? i : FAILED;
}

int main(void)
{
    int i, ky, idx;
    int vx[NUMBER + 1]; // 要素を1個多く用意する

    for (i = 0; i < NUMBER; i++) {
        printf("vx[%d] : ", i);
        scanf("%d", &vx[i]);
    }
    printf("探す値 : ");
    scanf("%d", &ky);

    if ((idx = search(vx, ky, NUMBER)) == FAILED) {
        puts("\a探索に失敗しました。");
    }
    else {
        printf("%dは%d番目にあります。\n", ky, idx + 1);
    }

    return 0;
}
