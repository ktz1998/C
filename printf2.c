/*桁数の前に0を付けると、空白の代わりに0を付けて表示するようになる
  ^^^^^^^^^^^^^^^^^
*/

#include <stdio.h>

int main(void)
{
    int a = 10000, b = 500, c = 3;

    printf("Aは %05d です。\n", a);  //先頭に0をつける
    printf("Bは %05d です。\n", b);
    printf("Cは %05d です。\n", c);

    return 0;
}