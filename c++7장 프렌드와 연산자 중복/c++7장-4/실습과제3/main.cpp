#include "Power.hpp"                                // 헤더파일 포함

int main() {
    Power a(3, 5), b;                             // 객체 2개 생성
    a.show();                                     // a의 멤버함수 호출
    b.show();                                     // b의 멤버함수 호출
    b = 2*a;                                      // 파워 객체와 정수 곱하기
    a.show();                                     // a의 멤버함수 호출
    b.show();                                     // b의 멤버함수 호출
}
