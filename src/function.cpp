#include <iostream>

// 関数の定義
// int型の値を2つ受け取り、大きい方のint型の値を返す
int findMax(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x = 10;
    int y = 20;

    // 関数の呼び出し
    int max_value = findMax(x, y);

    std::cout << x << "と" << y << "のうち、大きい方は " << max_value << " です。" << std::endl;
    return 0;
}
