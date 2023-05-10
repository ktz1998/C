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
    printf("Hello World");
    return 0;
}