#include <iostream>
#include <string>

// 표준 라이브러리에서 사용할 이름을 선언
using std::cin;     using std::endl;
using std::cout;    using std::string;

int main() {
    // 사용자의 이름을 물음
    cout << "Please enter first name: ";

    // 이름을 읽음 
    string name;
    cin >> name;

    // 인사말 구성 (이 부분이 누락되어 추가했습니다)
    const string greeting = "Hello, " + name + "!";

    // 테두리와 인사말 사이의 간격
    const int pad = 1;

    // 출력할 행(rows)과 열(cols) 개수 계산
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;

    // 입력 부분과 출력 부분을 구분하기 위해 한 행 건너뜀
    cout << endl;

    // r개의 행을 출력
    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;

        while (c != cols) {
            // 인사말을 출력할 위치인지 판별
            if (r == pad + 1 && c == pad + 1) {
                cout << greeting;
                c += greeting.size();
            } else {
                // 테두리(*)를 출력할 위치인지 판별
                if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
                ++c;
            }
        }
        cout << endl;
    }

    return 0;
}