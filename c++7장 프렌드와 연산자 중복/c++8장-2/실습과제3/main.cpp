#include "Shape.hpp"                                 // 헤더파일 포함 

int main() {                              
    Circle x(0, 0, 2);                              // 클래스 객체 생성 및 생성자 호출
    Rect y(1, 1, 5,10);                             // 클래스 객체 생성 및 생성자 호출
    Triangle z(2,2,5,10);                           // 클래스 객체 생성 및 생성자 호출
    x.show(); y.show(); z.show();                   // 객체들의 show 함수 출력
}