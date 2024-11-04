#ifndef _COMPLEX_HPP_                   // 헤더파일이 정의되있지 않으면 참인 조건문
#define _COMPLEX_HPP_                   // 헤더파일 정의

#include <iostream>                     // iostream 포함 
using namespace std;                    // std 생략하기 위하여 사용

class Complex{                          // 클래스 생성
    int real, img;                      // 정수 2개를 선언
public:
    Complex(int r=0, int img=0);        // 생성자 선언
    void show();                        // 멤버함수 정의
    void operator++();                  // 멤버함수 정의
    void operator--(int a);             // 멤버함수 정의
};


#endif