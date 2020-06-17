// 演習6-11
// 要素数nの配列v内のkeyと等しい全要素の添字を、配列idxに格納する関数search_idxを作成する。返却するのはkeyと等しい要素の個数とする。
// int search_idx(const int v[], int idx[], int key, int n);
// たとえば、vに受け取った配列の要素が{1, 7, 5, 7, 2, 4, 7}でkeyが7であれば、idxに{1, 3, 6}を格納した上で3を返却する。

#include <stdio.h>
#define NUMBER 7

// 要素数nの配列vから値がkeyの全要素の添字をidxに格納して個数を返却
int search_idx(const int v[], int idx[], int key, int n)
{
    int i;
    int count = 0;

    for (i = 0; i < n; i++) {
        if (v[i] == key) {
            idx[count++] = i;
        }
    }
    return count;
}

int main(void)
{
    int i, ky, count;
    int vx[NUMBER];
    int idx[NUMBER];

    for (i = 0; i < NUMBER; i++) {
        printf("vx[%d] : ", i);
        scanf("%d", &vx[i]);
    }
    printf("\n探す値 : ");
    scanf("%d", &ky);
    if ((count = search_idx(vx, idx, ky, NUMBER)) == 0) {
        puts("\aその値は含まれません。");
    } else {
        printf("%dに該当する添字の数 : %d\n", ky, count);
    }
    for (i = 0; i < count; i++) {
        printf("vx[%d] = %d\n", idx[i], vx[idx[i]]);
    }

    return 0;
}
