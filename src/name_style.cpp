#include <iostream>

// 定数 (UPPER_SNAKE_CASE)
const double PI = 3.14159;

// クラス (PascalCase)
class CircleCalculator {
public:
    // 関数 (snake_case)
    double calculate_area(double radius) {
        // 変数 (snake_case)
        double circle_area = PI * radius * radius;
        return circle_area;
    }
};

int main() {
    CircleCalculator calculator;
    double radius = 5.0;
    double area = calculator.calculate_area(radius);
    
    std::cout << "半径" << radius << "の円の面積は" << area << "です。" << std::endl;
    return 0;
}
