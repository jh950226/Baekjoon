#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;           // A와 B 입력 받기
    std::cout << A - B << std::endl;  // A - B 출력
    return 0;
}

// A와 B라는 int형의 변수를 설정하고 cin이라는걸 활용해서 A 엔터나 B 엔터를 치면
// A와 B에 값이 들어가게됨. 그러면 6번째 줄인 A-B가 출력되게됨
// return 0; 이거는 int main() 함수의 리턴값을 지정해줘야되고 0을 넣어줘야 종료를 인식함
