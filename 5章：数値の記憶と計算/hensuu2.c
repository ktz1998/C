#include <stdio.h>

int main(void){
    int left;
    int right;
    left = 10;
    right = 4;
    printf("%d\n", left + right);
    printf("%d\n", left - right);
    printf("%d\n", left * right);
    printf("%d\n", left / right);
    printf("%d\n", left % right);
    return 0;
}

/*このプログラムの良い所は、変数に代入する数値を書き換えるだけで、
後の計算の数値もすべて置き換わるので、変更が1回で済むと言う点にあります。*/