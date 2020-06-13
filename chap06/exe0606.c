// 演習6-6
// 警報をn回連続して発する関数を作成する（環境によっては、音が出ません）
// void alert(int n) {}

#include <stdio.h>

void alert(int n)
{
    while (n-- > 0)
    {
        putchar('\a');
    }
}

int main(void)
{
    int n;
    printf("整数を入力してください : ");
    scanf("%d", &n);
    alert(n);

    return 0;
}
