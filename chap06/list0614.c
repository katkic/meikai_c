// 逐次探索（番兵法）
#include <stdio.h>
#define NUMBER  5  // 要素数
#define FAILED -1  // 探索失敗

// 要素数nの配列vからkeyと一致する要素を探索（番兵法)
int search(int v[], int key, int n)
{
    int i = 0;
    v[n] = key;  // 番兵を格納

    while (1) {
        if (v[i] == key) {
            break;  // 探索成功
        }
        i++;
    }
    return (i < n) ? i : FAILED;
}

int main(void)
{
    int i, ky, idx;
    int vx[NUMBER + 1];  // 要素を1個多く用意する

    for (i = 0; i < NUMBER; i++) {
        printf("vx[%d] : ", i);
        scanf("%d", &vx[i]);
    }
    printf("探す値 : ");
    scanf("%d", &ky);

    if ((idx = search(vx, ky, NUMBER)) == FAILED) {
        puts("\a探索に失敗しました。");
    } else {
        printf("%dは%d番目にあります。\n", ky, idx + 1);
    }

    return 0;
}
