#include <iostream>

int main() {
    int num1, num2;
    
    std::cout << "첫 번째 숫자를 입력하세요: ";
    std::cin >> num1;
    
    std::cout << "두 번째 숫자를 입력하세요: ";
    std::cin >> num2;
    
    if (num1 > num2) {
        std::cout << num1 << "이(가) " << num2 << "보다 더 큽니다." << std::endl;
    } else if (num2 > num1) {
        std::cout << num2 << "이(가) " << num1 << "보다 더 큽니다." << std::endl;
    } else {
        std::cout << "두 숫자는 " << num1 << "로 같습니다." << std::endl;
    }
    
    return 0;
}