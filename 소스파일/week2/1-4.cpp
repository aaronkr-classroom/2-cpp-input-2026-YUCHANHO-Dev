//p74 1-4
#include <iostream>
#include <string>

int main(){
    {
        std::string s = "a string";
        std::cout << s << std::endl;
    }
    {
        const std::string s = "another string";
        std::cout << s << std::endl;
    }
    return 0;
}