#include "Shape.hpp"                                 // 헤더파일 포함 

int main() {
    Circle x; Rect  y; Triangle z;                   // 클래스 3개 생성
    x.setCircle(0, 0, 2);                            // x, y는기본클래스의멤버함수를통해설정
    y.setRect(1, 1, 5,10);                           // x, y는기본클래스의멤버함수를통해설정
    z.setTriangle(2, 2, 3, 4);                       // x, y는기본클래스의멤버함수를통해설정
    x.show(); y.show(); z.show();                    // x, y의출력은기본클래스멤버를통해출력
}