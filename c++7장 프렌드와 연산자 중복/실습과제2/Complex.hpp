#ifndef _COMPLEX_HPP_                             // 헤더파일이 정의되있지 않으면 참인 조건문           
#define _COMPLEX_HPP_                             // 헤더파일을 정의

#include <iostream>                               // iostream을 포함
using namespace std;                              // std 생략하기 위해서 씀

class Complex{                                    // 클래스 생성 
    int real,img;                                 // 멤버변수 2개 선언
public:
    Complex(int r =0, int i=0);                   // 생성자 선언

    void show();                                  // 멤버함수 선언 
    Complex operator *(Complex a);                // operator 멤버함수 선언

};


#endif