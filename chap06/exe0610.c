// 演習6-10
// 要素数がnであるintの配列v2の並びを反転したものを配列v1に格納する関数
// void intary_rcpy(int v1[], const int v2[], int n) {]

#include <stdio.h>

void intary_rcpy(int v1[], const int v2[], int n)
{
    int i;
    int num = n - 1;

    for (i = 0; i < n; i++) {
        v1[num - i] = v2[i];
    }
}

int main(void)
{
    int i;
    int numbers[] = {1, 2, 3, 4, 5, 6, 7};
    int reverse[7];

    puts("入力値");
    printf("{ ");
    for (i = 0; i < 7; i++) {
        printf("%d ", numbers[i]);
    }
    printf("}\n");

    puts("入力値を反転");
    intary_rcpy(reverse, numbers, 7);
    printf("{ ");
    for (i = 0; i < 7; i++) {
        printf("%d ", reverse[i]);
    }
    printf("}\n");

    return 0;
}
