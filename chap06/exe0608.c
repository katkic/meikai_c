// 演習6-8
// 要素数がnであるintの配列vの要素の最小値を返す関数を作成する
// int min_of(int v[], int n) {}

#include <stdio.h>

int min_of(int v[], int n)
{
    int i;
    int min = v[0];

    for (i = 1; i < n; i++) {
        if (v[i] < min) {
            min = v[i];
        }
    }
    return min;
}

int main(void)
{
    int i;
    int numbers[] = {6, 2, 5, 7, 9, 11};

    printf("入力値 : ");
    printf("{ ");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("}\n");
    printf("最小値 : %d", min_of(numbers, 6));

    return 0;
}
