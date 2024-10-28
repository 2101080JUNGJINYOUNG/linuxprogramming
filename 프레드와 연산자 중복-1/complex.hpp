#ifndef _COMPLEX_HPP_                 // complex 헤더파일이 정의 되있지 않으면 실행하는 코드
#define _COMPLEX_HPP_                 // complex 헤더파일 정의

#include <iostream>                   // iostream 포함
using namespace std;                  // std 생략
class Complex;                        // Complex 클래스 선언
Complex Complexadd(Complex a, Complex b);      // 함수 선언
class Complex                                  // 클래스 생성
{
        int real;                              // 정수를 저장할 변수 1개 선언
        int img;                               // 정수를 저장할 변수 1개 선언

public:
	Complex(int r=0, int i=0);                       // 타켓생성자 선언
	void show();                                     // 멤버함수 선언
	friend Complex Complexadd(Complex a, Complex b); // 외부 함수를 Complex 클래스 내에 선언
};

#endif
