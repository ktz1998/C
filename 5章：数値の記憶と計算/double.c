//int型が整数を記憶するのに対して、double型は実数を記憶する型

//double型を使用して四則演算を行う例
#include <stdio.h>

int main(void){
    double left, right;
    left = 10;
    right = 3;
    printf("%f\n", left + right);
    printf("%f\n", left - right);
    printf("%f\n", left * right);
    printf("%f\n", left / right);
    return 0;
}

//使い方は以前までに使っていたintと全く同じ