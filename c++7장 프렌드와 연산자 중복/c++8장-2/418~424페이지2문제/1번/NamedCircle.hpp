#ifndef _NAMEDCIRCLE_HPP_                                            // 헤더파일이 정의되어있지 않으면 참인 조건문
#define _NAMEDCIRCLE_HPP_                                            // 헤더파일 정의

#include <iostream>                                                  // iosream 포함
using namespace std;                                                 // std 생략

class Circle {                                                       // Circle 클래스 생성
    int radius;                                                      // 정수를 저장할 변수 1개 선언
public:
    Circle(int radius=0);                                            // 타켓 생성자 선언
    int getRadius();                                                 // 멤버함수 선언
    void setRadius(int radius);                                      // 멤버함수 선언
    double getArea();                                                // 멤버함수 선언
};

class NamedCircle: public Circle{                                    // NamedCircle 클래스 생성 및 Circle 상속받음
    string b;                                                        // 문자열을 저장할 변수 1개 선언
public: 
    NamedCircle(int r=0, string b=" ");                              // 타켓생성자 선언
    void show();                                                     // 멤버함수 선언
};

#endif