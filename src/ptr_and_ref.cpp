#include <iostream>

// 参照を使って、受け取った変数の値を直接10増やす関数
void addTen(int& value) {
    value += 10;
}

// 配列をポインタとして受け取り、全要素を表示する関数
// int arr[] と書いても int* arr と書いても同じ意味になる
void printArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // 参照の例
    int num = 5;
    std::cout << "元の値: " << num << std::endl;
    addTen(num); // numへの参照を渡す
    std::cout << "関数実行後の値: " << num << std::endl;

    std::cout << "---" << std::endl;

    // ポインタと配列の例
    int my_array[] = {10, 20, 30, 40, 50};
    int array_size = sizeof(my_array) / sizeof(my_array[0]);
    
    std::cout << "配列の要素: ";
    // 配列の名前 `my_array` は先頭要素へのポインタとして渡される
    printArray(my_array, array_size);
    
    return 0;
}
