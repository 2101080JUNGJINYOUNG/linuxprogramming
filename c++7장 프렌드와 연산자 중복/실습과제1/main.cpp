 #include "Complex.hpp"                 // 헤더파일 포함

int main() {
    Complex x(2, 3), y(-5, 10), sum;    // Complex 객체 3개 생성
    sum = x + y;                        // operator 멤버함수를 호출하여 반환값을 sum에 넣어준다
    cout<< "두복소수의합은";             // 안내메세지 출력
    sum.show();                         // 함수 호출
    return 0;                           // 0을 외부로 반환
 }