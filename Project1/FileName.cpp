#define MAIN1

#ifdef MAIN1

//#include <iostream>
//
//int main()
//{
//    int val = 0;
//
//    std::cout << "���̸� �Է��ϼ���. ";
//    std::cin >> val;
//
//    
//    if (val >= 1 && val <= 7) {
//        std::cout << "����" << std::endl;
//    }
//    else if (val >= 8 && val <= 13) {
//        std::cout << "�ʵ��л�" << std::endl;
//    }
//    else if (val >= 14 && val <= 16) {
//        std::cout << "���л�" << std::endl;
//    }
//    else if (val >= 17 && val <= 19) {
//        std::cout << "����л�" << std::endl;
//    }
//    else if (val >= 20 && val <= 199) {
//        std::cout << "����" << std::endl;
//    }
//    else if (val >= 200) {
//        std::cout << "���̰� �ʹ� �����ϴ�." << std::endl;
//    }
//
//    return 0;
//}


//#include <iostream>
//#include <string>
//
//int main()
//{
//    std::string name;
//
//    std::cout << "�̸��� �Է��ϼ��� ";
//    std::cin >> name;
//
//    if (name == "ȫ�浿") {
//        std::cout << "����" << std::endl;
//    }
//    else if (name == "������") {
//        std::cout << "����" << std::endl;
//    }
//    else {
//        std::cout << "�𸣰ڽ��ϴ�." << std::endl;
//    }
//
//    return 0;
//}
//#include <iostream>
//
//int main() {
//    int score = 0;
//    std::cout << "������ �Է��ϼ���. ";
//    std::cin >> score;
//
//
//    int grade;
//
//    if (score >= 91 && score <= 100) {
//        grade = 1;  
//    }
//    else if (score >= 76 && score <= 90) {
//        grade = 2;  
//    }
//    else if (score >= 51 && score <= 75) {
//        grade = 3;  
//    }
//    else if (score >= 35 && score <= 50) {
//        grade = 4;  
//    }
//    else { 
//        grade = 5;  
//    }
//
//    switch (grade) {
//    case 1:
//        std::cout << "A" << std::endl;
//        break;
//    case 2:
//        std::cout << "B" << std::endl;
//        break;
//    case 3:
//        std::cout << "C" << std::endl;
//        break;
//    case 4:
//        std::cout << "D" << std::endl;
//        break;
//    case 5:
//        std::cout << "F" << std::endl;
//        break;
//    
//    }
//
//    return 0;
//}


//#include <iostream>
//
//int main() {
//    int num = 0;
//    std::cout << "���ڸ� �Է��ϼ���." << std::endl;
//    std::cin >> num;
//
//    num % 5 == 0
//        ? std::cout << num << "�� 5�� ����Դϴ�." << std::endl
//        : std::cout << num << "�� 5�� ����� �ƴմϴ�." << std::endl;
//
//    return 0;
//}

//#include <iostream>
//
//int main() {
//    int today = 0;
//    int birthday = 0;
//
//    std::cout << "���� ��¥�� �Է��ϼ���. (MMDD)" << std::endl;
//    std::cin >> today;
//
//    std::cout << ("���� ��¥�� �Է��ϼ���. (MMDD)") << std::endl;
//    std::cin >> birthday;
//
//    if (birthday > today) {
//        std::cout << "������ �� Ů�ϴ�." << std::endl;
//    }
//
//    else if (birthday < today) {
//        std::cout << "������ �� Ů�ϴ�." << std::endl;
//    }
//    else {
//        std::cout << "�� ���� �����ϴ�." << std::endl;
//    }
//    
//    return 0;
//}

#include <iostream>

int main()
{
    int num1 = 0;
    int num2 = 0;
    char op;

    std::cout << "���ڸ� �Է��ϼ���." << std::endl;
    std::cin >> num1;

    std::cout << "�����ڸ� �Է��ϼ���. (+, -, *, /)" << std::endl;
    std::cin >> op;

    std::cout << "���ڸ� �Է��ϼ���." << std::endl;
    std::cin >> num2;

    if (op == '+') {
        std::cout << num1 << op << num2 << "=" << (num1 + num2) << std::endl;
    }
    else if (op == '-') {
        std::cout << num1 << op << num2 << "=" << (num1 - num2) << std::endl;
    }
    else if (op == '*') {
        std::cout << num1 << op << num2 << "=" << (num1 * num2) << std::endl;
    }
    else if (op == '/') {
        if (num2 != 0) {
            std::cout << num1 << op  << num2 << "=" << (num1 / num2) << std::endl;
        }
        else {
            std::cout << "0���� ���� �� �����ϴ�." << std::endl;
        }
    }
    else {
        std::cout << "�߸��� �Է��Դϴ�." << std::endl;
    }

    return 0;
}

#endif
