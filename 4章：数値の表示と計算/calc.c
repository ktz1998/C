/*次のプログラムは、100+200 を計算させて表示する例です。

#include <stdio.h>
int main(void){
    printf("%d\n",100 + 200);
    return 0;
} */

/*なお、整数計算の結果は四捨五入ではなく切り捨てとなります。
なぜなら、四捨五入を行うと、商×割る数、の逆計算を行ったときに、
その結果が、元の割られる数よりも大きいという矛盾が生じるためです。

もっと複雑な式であっても、問題なく計算できます。
次のプログラムは、1～100までの合計を公式で計算する例です。
*/
#include <stdio.h>

int main(void){
    printf("%d\n",(1 + 100) * 100 / 2);
    return 0;
}

/*C言語でも、数式での優先順位は、数学と同じです。
乗算や除算は、加算や減算よりも先に計算されます。
優先順位を変えたい時には、() をつけるのも、数学とまったく同じです。

ただし、数学では、2重の () には {} を使いますが、C言語では違います。
C言語では、何重の () であっても、() の記号を使用します。*/