#include "Shape.hpp"                                                     // 헤더파일 포함

void Shape::set_point(int x,int y){                                      // Shape 멤버함수 정의
    this->x = x;                                                         // this->x에 x를 넣어준다
    this->y = y;                                                         // this->y에 y를 넣어준다
}
void Shape::showw(){                                                     // Shape 멤버함수 정의
    cout << "좌표 (" << x <<"," << y << ")에 ";                           // x,y를 화면에 출력해준다
}

void Circle::setCircle(int x, int y, int r){                              // Circle 멤버함수 정의
    set_point(x,y);                                                       // 부모클래스의 Shape 멤버함수 호출
    this->radius = r;                                                     // this->radius에 r을 넣어준다   
}
void Circle::show(){                                                      // Circle 멤버함수 정의
    showw();                                                              // 부모 멤버함수 호출
    cout << "반지름"<< radius << "인 원" << endl;                          // radius를 화면에 출력해준다
}

void Rect::setRect(int x, int y, int w, int h){                            // Rect 멤버함수 정의
    set_point(x,y);                                                        // 부모 멤버함수 호출
    this->width = w;                                                       // this->width에 w를 넣어준다
    this ->height= h;                                                      // this->height에 h를 넣어준다
}

void Rect::show(){                                                         // Rect 멤버함수 정의
    showw();                                                               // 부모 멤버함수 호출
    cout << "폭"<< width << ", 높이" << height << "인 직사각형"<<endl;       // width, height를 화면에 출력해준다
}



void Triangle::setTriangle(int x, int y, int w, int h){                      // Triangle 멤버함수 정의
    set_point(x,y);                                                          // 부모클래스 멤버함수 호출
    this->width = w;                                                         // this->width에 w를 넣어준다
    this ->height= h;                                                        // this->height에 h0를 넣어준다
}

void Triangle::show(){                                                       // Triangle 멤버함수 정의
    showw();                                                                 // 부모클래스 멤버함수 호출
    cout << "밑변"<< width << ", 높이" << height << "인 삼각형"<<endl;        // width와 height를 화면에 출력해준다.
}
