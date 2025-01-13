#include <iostream>
#include <string>

int main() {
    std::string val;

    std::cout << "출력할 문자열을 입력하세요. 이 문자열은 5번 출력됩니다" << std::endl;
    std::cin >> val;
    std::cout << "입력된 값: ";
    std::cout << val << std::endl;

    for (int i = 1; i < 6; i++) {
        std::cout << i << "회 출력! 입력한 문자열: " << val << std::endl;
    }

    return 0;
}
