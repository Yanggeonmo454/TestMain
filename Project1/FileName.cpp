#define MAIN1

#ifdef MAIN1

//#include <iostream>
//
//int main()
//{
//    int val = 0;
//
//    std::cout << "나이를 입력하세요. ";
//    std::cin >> val;
//
//    
//    if (val >= 1 && val <= 7) {
//        std::cout << "유아" << std::endl;
//    }
//    else if (val >= 8 && val <= 13) {
//        std::cout << "초등학생" << std::endl;
//    }
//    else if (val >= 14 && val <= 16) {
//        std::cout << "중학생" << std::endl;
//    }
//    else if (val >= 17 && val <= 19) {
//        std::cout << "고등학생" << std::endl;
//    }
//    else if (val >= 20 && val <= 199) {
//        std::cout << "성인" << std::endl;
//    }
//    else if (val >= 200) {
//        std::cout << "나이가 너무 많습니다." << std::endl;
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
//    std::cout << "이름을 입력하세요 ";
//    std::cin >> name;
//
//    if (name == "홍길동") {
//        std::cout << "남자" << std::endl;
//    }
//    else if (name == "성춘향") {
//        std::cout << "여자" << std::endl;
//    }
//    else {
//        std::cout << "모르겠습니다." << std::endl;
//    }
//
//    return 0;
//}
//#include <iostream>
//
//int main() {
//    int score = 0;
//    std::cout << "점수를 입력하세요. ";
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
//    std::cout << "숫자를 입력하세요." << std::endl;
//    std::cin >> num;
//
//    num % 5 == 0
//        ? std::cout << num << "는 5의 배수입니다." << std::endl
//        : std::cout << num << "는 5의 배수가 아닙니다." << std::endl;
//
//    return 0;
//}

//#include <iostream>
//
//int main() {
//    int today = 0;
//    int birthday = 0;
//
//    std::cout << "오늘 날짜를 입력하세요. (MMDD)" << std::endl;
//    std::cin >> today;
//
//    std::cout << ("생일 날짜를 입력하세요. (MMDD)") << std::endl;
//    std::cin >> birthday;
//
//    if (birthday > today) {
//        std::cout << "생일이 더 큽니다." << std::endl;
//    }
//
//    else if (birthday < today) {
//        std::cout << "오늘이 더 큽니다." << std::endl;
//    }
//    else {
//        std::cout << "두 값이 같습니다." << std::endl;
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

    std::cout << "숫자를 입력하세요." << std::endl;
    std::cin >> num1;

    std::cout << "연산자를 입력하세요. (+, -, *, /)" << std::endl;
    std::cin >> op;

    std::cout << "숫자를 입력하세요." << std::endl;
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
            std::cout << "0으로 나눌 수 없습니다." << std::endl;
        }
    }
    else {
        std::cout << "잘못된 입력입니다." << std::endl;
    }

    return 0;
}

#endif
