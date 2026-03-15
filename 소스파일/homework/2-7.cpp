#include <iostream>

int main() {
    std::cout << "카운트다운 시작:" << std::endl;
    
    // 10부터 -5까지 1씩 감소시키며 출력합니다.
    for (int i = 10; i >= -5; --i) {
        std::cout << i << std::endl;
    }
    
    return 0;
}