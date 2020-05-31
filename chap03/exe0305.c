// 演習3-5
// 等価演算しや関係演算しが、1あるいは0の値を生成することを確認する
#include <stdio.h>

int main(void)
{
    printf("3 == 3 → %2d\n", 3 == 3);
    printf("3 != 3 → %2d\n", 3 != 3);
    printf("5 == 6 → %2d\n", 5 == 6);
    printf("5 != 6 → %2d\n", 5 != 6);
    printf("7 < 8 → %2d\n", 7 < 8);
    printf("7 > 8 → %2d\n", 7 > 8);

    return 0;
}
