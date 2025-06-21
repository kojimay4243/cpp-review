#include <iostream>

// add関数のプロトタイプ宣言
// 関数の見た目（シグネチャ）だけを先に書く。最後にセミコロンが必要。
int add(int a, int b);

int main() {
    int result = add(5, 3); // 定義は後にあるが、プロトタイプ宣言のおかげで呼び出せる
    std::cout << "5 + 3 = " << result << std::endl;
    return 0;
}

// add関数の定義（実際の処理内容）
int add(int a, int b) {
    return a + b;
}
