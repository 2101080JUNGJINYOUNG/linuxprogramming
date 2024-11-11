#include "Shape.hpp"                           // 헤더파일 포함

Shape::Shape(int x, int y) : x(x), y(y) {      // 타켓생성자 정의 및 x에 x를 넣어주고 y에 y를 넣어준다.
    cout << "Shape 생성, ";                    // 안내메세지 출력 
}

void Shape::printset(){
    cout <<"좌표 (" << x<<","<<y<<")";
}

Shape::~Shape() {                              // 소멸자 정의
    cout << "Shape 소멸" << endl;              // 안내메세지 출력 
}

Circle::Circle(int x, int y, int r) : Shape(x, y), radius(r) {                    // 타켓생성자 정의 및 부모 생성자 지정 및 radius에 r을 넣어준다
    cout << "Circle 생성" << endl;                                                // 안내메세지 출력
}

void Circle::show() {                                                             // 멤버함수 정의
    printset();
    cout <<"에 반지름 " << radius << "인 원" << endl;                              // 안내메세지 출력
}

Circle::~Circle() {                                                               // 소멸자 정의
    cout << "Circle 소멸, ";                                                      // 안내메세지 출력
}

Rect::Rect(int x, int y, int w, int h) : Shape(x, y), width(w), height(h) {       // 타켓생성자 정의 및 부모 생성자 지정 및 width에 w를 넣어주고 height에 h를 넣어준다
    cout << "Rect 생성" << endl;                                                  // 안내메세지 출력
}

void Rect::show() {                                                               // 멤버함수 정의
    printset();
    cout  <<"에 폭"<< width << ", 높이 " << height << "인 직사각형" << endl;       // width와 height와 안내메세지를 출력해준다
}

Rect::~Rect() {                                                                   // 소멸자 정의
    cout << "Rect 소멸, ";                                                          // 안내메세지 출력
}



Triangle::Triangle(int x, int y, int w, int h) : Shape(x, y), width(w), height(h) {        // 타켓생성자 정의 및 부모 생성자 지정 및 width에 w를 넣어주고 height에 h를 넣어준다
    cout << "Triangle 생성" << endl;                                                       // 안내메세지 출력
}
Triangle::~Triangle() {                                                                    // 소멸자 정의 
    cout << "Triangle 소멸, ";                                                             // 안내메세지 출력
}
void Triangle::show() {                                                                    // 멤버함수 정의
    printset();
    cout << "에 밑변 " << width << ", 높이 "<<height<<"인 삼각형"<<endl ;                    // width와 안내메세지 출력
}
