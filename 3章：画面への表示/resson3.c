/*画面に次のように表示するプログラムを作成せよ。
なお、2つ目の文字の頭が揃えられていれば、空白の数は問わない。

Intel : Pentium4
AMD 　: Athlon64*/


#include <stdio.h>

int main(void) {
    printf("Intel\t: Pentium4\n");
    printf("AMD\t: Athlon64\n");
    return 0;
}


/*
※\tを使わず、スペースで揃えてもかまわないが、\tを使った方が楽である。
※文末の改行\nは熟練者でも忘れやすいので注意する。
*/