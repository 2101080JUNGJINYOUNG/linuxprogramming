#ifndef _SHAPE_HPP_                                            // 헤더파일이 정의되어있지 않으면 참인 조건문
#define _SHAPE_HPP_                                            // 헤더파일 정의

#include <iostream>                                            // iostream 포함 
using namespace std;                                           // std 생략하기 위해서 사용

class Shape{                                                   // 클래스 생성
    int x,y;                                                   // 정수를 저장할 멤버변수 2개 선언
public: 
    void set_point(int x,int y);                               // 멤버함수 선언
    void showw();                                              // 멤버함수 선언
};

class Circle: public Shape{                                    // 클래스 생성 및 부모 클래스 상속받음
    int radius;                                                // 정수를 저장할 멤버변수 1개 선언
public:
    void setCircle(int x, int y, int r);                       // 멤버함수 선언
    void show();                                               // 멤버함수 선언
};

class Rect: public Shape{                                      // 클래스 생성 및 부모 클래스 상속받음
    int width, height;                                         // 정수를 저장할 멤버변수 2개 선언
public:
    void setRect(int x, int y, int w, int h);                  // 멤버함수 선언
    void show();                                               // 멤버함수 선언
};

class Triangle: public Shape{                                  // 클래스 생성 및 부모 클래스 상속받음
    int width, height;                                         // 정수를 저장할 멤버변수 2개 선언
public:
    void setTriangle(int x, int y, int w, int h);              // 멤버함수 선언
    void show();                                               // 멤버함수 선언
};

#endif