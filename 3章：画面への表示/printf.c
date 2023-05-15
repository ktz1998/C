/*#include(インクルード)疑似命令
疑似命令とは、プログラムコードではない命令のことです。
#includeはprintf関数などの準備をする命令なので、
この命令は機械語に翻訳されず、その前段階で処理されます。
コード→　#include <説明書のファイル名>　*/

/*printf関数の説明書は、stdio.h と言うファイルです。
つまり、次のようなプログラムを追加すれば、printf関数を使えるようになります。*/

#include <stdio.h>

int main(void)
{
    printf("Hello\n");
    printf("World\n");
    printf("Hello\nworld\n");
    
    printf("Windows\tMicrosoft\n");
    printf("MacOS\tApple\n");
    return 0;
}

/*C言語のプログラムで改行を行うには、エスケープシーケンスを使います。
エスケープシーケンスの1つに \n があり、これが改行を表すことになっています。
キーワード【エスケープシーケンス】
 →画面に表示出来ない制御を行うために使われる特殊文字。
 改行文字以外では、頭揃えのためにタブを挿入する \t がよく使われます。*/