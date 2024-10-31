 #include "Power.hpp"                    // 헤더파일 포함

int main() {
    Power a(3, 5), b;                    // Power 객체 2개 생성
    a.show();                            // 멤버함수 호출
    b.show();                            // 멤버함수 호출
    b =a - 2;                            // 파워객체와정수빼기  
    a.show();                            // 멤버함수 호출
    b.show();                            // 멤버함수 호출
    return 0;                            // 0을 외부로 반환
 }