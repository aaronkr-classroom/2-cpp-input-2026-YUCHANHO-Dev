// //20211957 유찬호

// #include <iostream>

// int main() {
//     // 정사각형 출력 (가로 5칸)
//     std::cout << "정사각형:" << std::endl;
//     std::cout << "****" << std::endl;
//     std::cout << "*  *" << std::endl; // 스페이스바 3칸
//     std::cout << "*  *" << std::endl; // 스페이스바 3칸
//     std::cout << "****" << std::endl << std::endl;

//     // 직사각형 출력 (가로 8칸)
//     std::cout << "직사각형:" << std::endl;
//     std::cout << "********" << std::endl;
//     std::cout << "*      *" << std::endl; // 스페이스바 6칸
//     std::cout << "********" << std::endl << std::endl;

//     // 삼각형 출력 (가운데 정렬)
//     std::cout << "삼각형:" << std::endl;
//     std::cout << "   * " << std::endl;
//     std::cout << "  *** " << std::endl;
//     std::cout << " ***** " << std::endl;
//     std::cout << "*******" << std::endl;

//     return 0;
// }

#include <iostream>
#include <limits> // 입력 버퍼를 완벽하게 비우기 위해 추가

using std::cout;
using std::cin;
using std::endl;

int main() {
    while (true) {
        int mainChoice;

        cout << "출력할 도형을 선택하세요." << endl;
        cout << "1. 사각형" << endl;
        cout << "2. 삼각형" << endl;
        cout << "선택: ";
        cin >> mainChoice;

        // --- 🚨 입력 오류 방어 코드 시작 ---
        if (cin.fail()) {
            cin.clear(); // 1. 에러 상태를 초기화하여 정상 작동하도록 복구
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 2. 버퍼에 남은 잘못된 입력(엔터 치기 전까지의 모든 문자) 비우기
            cout << "잘못된 입력입니다. 숫자만 입력해 주세요.\n\n";
            continue; // 3. 밑으로 내려가지 않고 루프의 처음(메인 메뉴)으로 돌아감
        }
        // --- 입력 오류 방어 코드 끝 ---

        if (mainChoice == 1) {
            int subChoice;
            cout << "\n어떤 사각형을 출력하시겠습니까?" << endl;
            cout << "1. 정사각형" << endl;
            cout << "2. 직사각형" << endl;
            cout << "선택: ";
            cin >> subChoice;

            // 서브 메뉴에도 동일한 방어 코드 적용
            if (cin.fail()) {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << "잘못된 입력입니다. 숫자만 입력해 주세요.\n\n";
                continue; 
            }

            if (subChoice == 1) {
                cout << "\n[정사각형]" << endl;
                for (int i = 0; i < 5; ++i) {
                    for (int j = 0; j < 5; ++j) {
                        if (i == 0 || i == 4 || j == 0 || j == 4) {
                            cout << "*";
                        } else {
                            cout << " ";
                        }
                    }
                    cout << endl;
                }
            } else if (subChoice == 2) {
                cout << "\n[직사각형]" << endl;
                for (int i = 0; i < 4; ++i) {
                    for (int j = 0; j < 8; ++j) {
                        if (i == 0 || i == 3 || j == 0 || j == 7) {
                            cout << "*";
                        } else {
                            cout << " ";
                        }
                    }
                    cout << endl;
                }
            } else {
                cout << "잘못 선택했습니다." << endl;
            }

        } else if (mainChoice == 2) {
            int subChoice;
            cout << "\n어떤 삼각형을 출력하시겠습니까?" << endl;
            cout << "1. 올바른 삼각형" << endl;
            cout << "2. 뒤집힌 삼각형" << endl;
            cout << "선택: ";
            cin >> subChoice;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << "잘못된 입력입니다. 숫자만 입력해 주세요.\n\n";
                continue; 
            }

            if (subChoice == 1) {
                cout << "\n[올바른 삼각형]" << endl;
                int size = 4;
                for (int i = 0; i < size; ++i) {
                    for (int j = 0; j < (2 * size - 1); ++j) {
                        if (i == size - 1) cout << "*";
                        else if (j == (size - 1) - i || j == (size - 1) + i) cout << "*";
                        else cout << " ";
                    }
                    cout << endl;
                }
            } else if (subChoice == 2) {
                cout << "\n[뒤집힌 삼각형]" << endl;
                int size = 4; 
                for (int i = 0; i < size; ++i) {
                    for (int j = 0; j < (2 * size); ++j) {
                        if (i == 0 && j < (2 * size - 1)) cout << "*";
                        else if (j == i || j == (2 * size - 2 - i)) cout << "*";
                        else if (j < (2 * size - 1)) cout << " ";
                    }
                    cout << endl;
                }
            } else {
                cout << "잘못 선택했습니다." << endl;
            }

        } else {
            cout << "잘못 선택했습니다." << endl;
        }

        // 반복 여부 확인 로직
        char continueChoice;
        cout << "\n다른 도형을 계속 출력하시겠습니까? (y/n): ";
        cin >> continueChoice;

        if (continueChoice == 'n' || continueChoice == 'N') {
            cout << "프로그램을 종료합니다." << endl;
            break; 
        }
        
        cout << "\n----------------------------------------\n\n";
    }

    return 0;
}