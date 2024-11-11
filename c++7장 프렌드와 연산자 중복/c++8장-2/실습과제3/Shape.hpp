#ifndef _SHAPE_HPP_                      // Shape.hpp가 정의되어 있지 않으면 참인 조건문
#define _SHAPE_HPP_                      // Shape.hpp 정의

#include <iostream>                      // iostream 포함
using namespace std;                     // std 생략

class Shape {                            // 클래스 생성
    int x, y;                            // 정수를 저장할 멤버변수 2개 선언
public:
    Shape(int x, int y);                 // 타켓생성자 선언
    ~Shape();                            // 소멸자 선언
    void printset();
};

class Circle : public Shape {            // 클래스 생성 및 부모 상속
    int radius;                          // 정수를 저장할 멤버변수 1개 선언
public:
    Circle(int x=0, int y=0, int r=0);   // 타켓생성자 선언
    void show();                         // 멤버함수 선언
    ~Circle();                           // 소멸자 선언
};

class Rect : public Shape {                    // Rect 클래스 생성 및 부모 상속
    int width, height;                         // 정수를 저장할 멤버변수 2개 선언
public:
    Rect(int x=0, int y=0, int w=0, int h=0);  // 생성자에 위치와 폭, 높이 설정
    void show();                               // 멤버함수 1개 선언 
    ~Rect();                                   // 소멸자 선언
};

class Triangle : public Shape {                    // Triangle 클래스 생성 및 부모 상속
    int width, height;                             // 정수를 저장할 멤버변수 2개 선언
public:
    Triangle(int x=0, int y=0, int w=0, int h=0);  // 생성자에 위치와 밑변, 높이 설정
    void show();                                   // 멤버함수 선언
    ~Triangle();                                   // 소멸자 선언
};

#endif
