#include <iostream>
#include <string>

int main() {
    std::string val;

    std::cout << "����� ���ڿ��� �Է��ϼ���. �� ���ڿ��� 5�� ��µ˴ϴ�" << std::endl;
    std::cin >> val;
    std::cout << "�Էµ� ��: ";
    std::cout << val << std::endl;

    for (int i = 1; i < 6; i++) {
        std::cout << i << "ȸ ���! �Է��� ���ڿ�: " << val << std::endl;
    }

    return 0;
}
