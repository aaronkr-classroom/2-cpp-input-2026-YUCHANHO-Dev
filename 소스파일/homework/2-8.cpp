// #include <iostream>

// int main() {
//     int product = 1;
    
//     // 1부터 9까지 곱합니다.
//     for (int i = 1; i < 10; ++i) {
//         product *= i;
//     }
    
//     std::cout << "[1, 10) 범위에 있는 숫자들의 곱: " << product << std::endl;
    
//     return 0;
// }

#include <iostream>

int main() {
    int product = 1;
    int i = 1;

    // 불변성: 지금까지 [1, i) 범위에 있는 숫자들의 곱을 계산함
    while (i < 10) {
        product *= i;
        ++i;
    }

    std::cout << "[1, 10) 범위에 있는 숫자들의 곱: " << product << std::endl;

    return 0;
}