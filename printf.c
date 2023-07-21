/*数値の末尾で揃えて表示
   %桁数d  */

//printf関数で、数値の末尾で揃えて表示する。
//出力変換指定子の間に数字を付け、数を5桁に指定して読みやすくする。

#include <stdio.h>

int main(void)
{
    int a = 10000, b = 500, c = 3;

    printf("Aは %5d です。\n", a);  //%d → %5d にする(5桁指定)。以下行も同じ
    printf("Bは %5d です。\n", b);
    printf("Cは %5d です。\n", c);

    return 0;
}