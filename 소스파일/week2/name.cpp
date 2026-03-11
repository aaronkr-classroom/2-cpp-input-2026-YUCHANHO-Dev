// // // name.cpp

// // #include <iostream>
// // #include <string>

// // int main(void){
    
// //     //이름을 물음
// //     std::cout << "First name: >>";
    
// //     //이름을 읽어 들임
// //     std::string name;
// //     std::cin >> name;

// //     //인사말을 작성
// //     std::cout <<

// //     // 출력하려는 메세지를 작성
// //     const std::string greeting = "Hello, " + name + "!";

// //     /*
// //     *************    ->> 1st
// //     *              * ->> 2nd
// //     * Hello Aaron! * ->> 3rd
// //     *              * ->> 4th
// //     *                ->> 5th
// //     */

// //     // 인사말의 2번째 행과 4번째 행
// //     const std::string spaces(greeting.size(), ' ');
// //     const std::string second = "* " + spaces + " *";
    
// //     //인사말의 1번, 5번 행 
// //     const std::string first(second.size(), '+');
    
// //     //모두 출력 
// //     std::cout
// //         << std::endl //줄 변경
// //         << first:: << std::endl
// //         << second:: << std::endl
// //         <<"+ " << greeting << " +" << std::endl
// //         << second << std::endl
// //         << first  << std::endl
// //         << std::endl;
        
// //     return 0;
// // }

// 이름을 입력받아 테두리로 묶인 인사말을 생성
#include <iostream>
#include <string>

int main()
{
    std::cout << "Please enter your first name: ";
    std::string name;
    std::cin >> name;

    // 출력하려는 메시지를 구성
    const std::string greeting = "Hello, " + name + "!";

    // 인사말의 두 번째 행과 네 번째 행
    const std::string spaces(greeting.size(), ' ');
    const std::string second = "* " + spaces + " *";

    // 인사말의 첫 번째 행과 다섯 번째 행
    const std::string first(second.size(), '*');

    // 모두 출력
    std::cout << std::endl;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;

    return 0;
}