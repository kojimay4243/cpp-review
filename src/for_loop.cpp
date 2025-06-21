#include <iostream>

int main() {
    for (int i = 1; i <= 10; ++i) {
        if (i % 2 == 0) {
            // iが偶数なら、この回の処理をスキップして次のループへ
            continue;
        }
        if (i == 7) {
            std::cout << "7を発見したため、ループを抜けます。" << std::endl;
            // ループを完全に終了
            break;
        }
        std::cout << "現在の奇数: " << i << std::endl;
    }
    return 0;
}
