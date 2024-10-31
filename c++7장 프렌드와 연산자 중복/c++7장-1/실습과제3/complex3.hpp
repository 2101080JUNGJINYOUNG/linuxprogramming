#ifndef _COMPLEX3_HPP_                            // complex3 헤더파일이 포함되어있지 않으면 참인 조건문
#define _COMPLEX3_HPP_                            // complex3 헤더 파일 정의

#include <iostream>                               // iostream 포함
using namespace std;                              // std 생략하기 위해서 사용                            
class Complex;                                    // Complex 클래스 선언
class ComplexManager{                             // ComplexManager 클래스 생성
public:
    Complex ComplexAdd(Complex a, Complex b);     // 멤버 함수 선언
    Complex ComplexSub(Complex a, Complex b);     // 멤버 함수 선언

};

class Complex{                                    // Complex 클래스 생성
    int real;                                     // 정수를 저장할 변수 1개 선언
    int img;                                      // 정수를 저장할 변수 1개 선언
public: 
    Complex(int r=0,int i=0);                     // 타켓 생성자 선언
    void show();                                  // 멤버함수 선언
    friend ComplexManager;                        // friend 함수로 ComplexManager 클래스에 있는 함수들이 Complex에 접근할 수 있게함
};




#endif