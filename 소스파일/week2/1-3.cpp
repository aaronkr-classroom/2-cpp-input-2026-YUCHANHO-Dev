//p73 1-3 다음 프로그램이 올바르게 동작하는지 판단

#include <iostream>
#include <string>

int main(){

    {
        const std::string s = "a string";
        std::cout << s << std::endl;
    }
    {
        const std::string s = "another string";
        std::cout << s << std::endl;
    }
    return 0;
}