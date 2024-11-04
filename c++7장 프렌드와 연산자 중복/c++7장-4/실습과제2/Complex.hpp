#ifndef _COMPLEX_HPP_                                   // 헤더파일이 정의되어있지 않으면 참인 조건문
#define _COMPLEX_HPP_                                   // 헤더파일 정의

#include <iostream>                                     // iostream 포함
using namespace std;                                    // std를 생략하기 위해서 씀

class Complex;                                          // 클래스 선언
void operator++(Complex& op);                           // operator++ 함수 선언
void operator--(Complex& op,int a);                     // operator-- 함수 선언

class Complex{                                           // Complex 클래스 생성
    int real, img;                                       // 정수를 저장할 멤버변수 2개 선언
public:
    Complex(int r=0, int img=0);                         // 생성자 선언
    void show();                                         // 멤버함수 선언
    friend void operator++(Complex& op);                 // operator++ 함수를 Complex 멤버접근권한을 가지도록 friend 함수를 써준다.
    friend void operator--(Complex& op,int a);           // operator-- 함수를 Complex 멤버접근권한을 가지도록 friend 함수를 써준다.
};


#endif