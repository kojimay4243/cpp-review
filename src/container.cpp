#include <iostream>
#include <vector> // std::vector を使うために必要
#include <array>  // std::array を使うために必要

int main() {
    // std::vector の例：サイズが可変
    std::vector<int> dynamic_array;
    dynamic_array.push_back(10); // 要素を追加
    dynamic_array.push_back(20);
    dynamic_array.push_back(30);

    std::cout << "std::vectorの要素: ";
    // 範囲ベースfor文で簡単に出力できる
    for (int value : dynamic_array) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
    std::cout << "現在のサイズ: " << dynamic_array.size() << std::endl;
    
    std::cout << "---" << std::endl;

    // std::array の例：サイズは固定
    std::array<int, 4> static_array = {1, 2, 3, 4};
    
    std::cout << "std::arrayの要素: ";
    for (int value : static_array) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
    std::cout << "サイズ: " << static_array.size() << std::endl;

    // at() を使うと安全にアクセスできる (範囲外ならエラーを投げてくれる)
    std::cout << "3番目の要素: " << static_array.at(2) << std::endl;

    return 0;
}
