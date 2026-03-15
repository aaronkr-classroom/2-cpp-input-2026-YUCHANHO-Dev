//20211957 유찬호

#include <iostream>

int main() {
    // 정사각형 출력 (가로 5칸)
    std::cout << "정사각형:" << std::endl;
    std::cout << "****" << std::endl;
    std::cout << "*  *" << std::endl; // 스페이스바 3칸
    std::cout << "*  *" << std::endl; // 스페이스바 3칸
    std::cout << "****" << std::endl << std::endl;

    // 직사각형 출력 (가로 8칸)
    std::cout << "직사각형:" << std::endl;
    std::cout << "********" << std::endl;
    std::cout << "*      *" << std::endl; // 스페이스바 6칸
    std::cout << "********" << std::endl << std::endl;

    // 삼각형 출력 (가운데 정렬)
    std::cout << "삼각형:" << std::endl;
    std::cout << "   * " << std::endl;
    std::cout << "  *** " << std::endl;
    std::cout << " ***** " << std::endl;
    std::cout << "*******" << std::endl;

    return 0;
}