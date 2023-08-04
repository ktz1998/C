//scanf関数では、整数だけでなく、実数の入力も可能。
//ただし、実数の場合、 "%lf指定子" を使用する必要がある。
//printf関数では%f指定子だったので注意。

#include <stdio.h>

int main(void)
{
    int data1, data2;
    scanf("%d,%d", &data1, &data2); /* 入力部分 */
    printf("%d , %d\n", data1, data2);
    return 0;
} //aaa