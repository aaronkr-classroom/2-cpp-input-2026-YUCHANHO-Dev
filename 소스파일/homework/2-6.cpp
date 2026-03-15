#include <iostream>

int main() {
    // 설명: 
    // i가 0부터 시작하여 10보다 작을 때까지 반복합니다.
    // 반복할 때마다 i에 1을 더하고 출력하므로, 결과적으로 1부터 10까지 차례대로 출력합니다.
    
    int i = 0;
    while (i < 10) {
        i += 1;
        std::cout << i << std::endl;
    }
    
    return 0;
}