#include <iostream>

// ポインタ渡し：アドレスを渡し、*で間接参照して書き換える
void reset_with_pointer(int* p) {
    if (p != nullptr) { // NULLチェックが必要
        *p = 0;
    }
}

// 参照渡し：シンプルで安全
void reset_with_reference(int& ref) {
    // NULLチェックは不要
    ref = 0;
}

int main() {
    int a = 100;
    int b = 200;

    reset_with_pointer(&a);       // アドレスを渡す
    reset_with_reference(b);      // そのまま渡す

    std::cout << "ポインタでリセット後のa: " << a << std::endl;
    std::cout << "参照でリセット後のb: " << b << std::endl;
    
    return 0;
}
