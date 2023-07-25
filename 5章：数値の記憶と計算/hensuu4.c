/* 変数の値を1増やす演算子 ++ はインクリメント、
逆に１減らす演算子 -- はデクリメントと呼ばれる。*/

//例
#include <stdio.h>
int main(void){
    int value;
    value = 10;
    printf("%d\n", value);

    value++;  //1増やす
    printf("%d\n", value);

    value--;  //1減らす
    printf("%d\n", value);

    return 0;
}