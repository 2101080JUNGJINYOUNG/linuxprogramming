#include "Complex.hpp"        // 헤더파일 포함

int main() {           
    Complex x(2, 3);          // Complex 객체 1개 생성
    ++x;                      // x에 1을 더해준다 
    cout << "증가결과";        // 안내메세지 출력
    x.show();                 // 멤버 함수 호출
    x--;                      // x에 1을 빼준다
    cout << "감소결과";        // 안내메세지 출력
    x.show();                  // 멤버함수 호출
}