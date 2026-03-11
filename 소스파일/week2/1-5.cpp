//p74 1-5
#include <iostream>
#include <string>

int main(){
    {
        std::string s = "a string";
        {
            std::string x = s + ", really";
            std::cout << s << std::endl;
        }
        std::cout << x << std::endl; // x 변수가 내부 호출이므로 실행 안됨
    }
    return 0;
}