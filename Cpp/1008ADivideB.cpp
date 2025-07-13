#include <iostream>
#include <stdio.h>

int main() {
    double A, B;
    std::cin >> A >> B;           // A와 B 입력 받기
    printf("%.9f\n", A / B);
    return 0;
}

// int A, B; 이렇게 하면
// 정수밖에 안됨. 그리고 std::cout >> A/B >> endl; 해도 0이나와버림
// 0.3333333333333 이렇게 나오려면 C스타일을 빌려야함.
