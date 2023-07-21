//型を強制的に変換する"キャスト変換"で
//整数と実数の計算結果を整数で表示する
/*キャスト変換
　(変換する型名)数値や変数名*/

//消費税（1.05）の計算例
#include <stdio.h>

int main(void){
    //360円の商品の消費税込み価格
    printf("%d\n", (int)(1.05 * 360)); //実数値である 1.05 を整数に変換
    return 0;
}

//1.05×360 に () をつけて計算しているのは、
//そうしないと1.05 が先に変換され 1 になってしまうため