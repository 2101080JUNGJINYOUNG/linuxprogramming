#ifndef _COMPLEX2_HPP_                                    // complex2 헤더파일을 정의하지 않았으면 참인 조건문
#define _COMPLEX2_HPP_                                    // complex2를 정의
 
#include <iostream>                                       // iostream 포함
using namespace std;                                      // std 생략
class Complex;                                            // Complex 클래스 선언

class ComplexManager{                                     // ComplexManager 클래스 생성
public:
    Complex ComplexAdd(Complex a, Complex b);             // 멤버함수 선언
};

class Complex{                                            // Complex 클래스 생성
    int real;                                             // 정수를 저장할 변수 1개 선언
    int img;                                              // 정수를 저장할 변수 1개 선언
public:
    Complex(int r=0,int i=0);                             // 타켓생성자 선언
    void show();                                          // 멤버함수 선언
    friend Complex ComplexManager::ComplexAdd(Complex a, Complex b); // ComplexManager 클래스 내에 있는 특정 함수에 Complex 멤버함수 권한 부여
};




#endif