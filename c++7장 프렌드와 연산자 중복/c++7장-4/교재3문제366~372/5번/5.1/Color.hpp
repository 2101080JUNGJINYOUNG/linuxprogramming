#ifndef _COLOR_HPP_                                        // 헤더 파일을 정의하고 있지 않으면 참인 조건문
#define _COLOR_HPP_                                        // 헤더 파일 정의

#include <iostream>                                        // iostream  포함
using namespace std;                                       // std를 생략하기 위하여 사용

class Color{                                               // Book 클래스 생성
    int a, b, c;                                           // 정수를 저장할 멤버변수 3개 선언
public:
    Color(int aa=0,int bb=0,int cc=0);                      // 생성자 선언           
    void show();                                            // 멤버 함수 선언    
    Color operator+(Color op);                              // operator+ 멤버함수 선언
    bool operator==(Color op);                              // operator== 멤버함수 선언
};

#endif