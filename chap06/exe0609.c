// 演習6-9
// 要素数がnであるintの配列vの要素の並びを反転する関数
// void rev_intary(int v[], int n) {}

#include <stdio.h>

void rev_intary(int v[], int n)
{
    int i;

    printf("{ ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", v[i]);
    }
    printf("}\n");
}

int main(void)
{
    int i;
    int numbers[] = {1, 2, 3, 4, 5, 6, 7};

    puts("入力値");
    printf("{ ");
    for (i = 0; i < 7; i++) {
        printf("%d ", numbers[i]);
    }
    printf("}\n");
    puts("入力値を反転");
    rev_intary(numbers, 7);

    return 0;
}
