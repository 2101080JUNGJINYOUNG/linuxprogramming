#ifndef _POWER_HPP_                             // 헤더파일이 정의되있지 않으면 참인 조건문
#define _POWER_HPP_                             // 헤더파일을 정의

#include <iostream>                             // iostream 포함
using namespace std;                            // std 생략

class Power{                                    // Power 클래스 생성
    int kick;                                   // 멤버변수 1개 생성
    int punch;                                  // 멤버변수 1개 생성
public:
    Power(int k=0, int p=0);                    // 생성자 선언

    void show();                                // 멤버함수 선언
    Power operator-(int a);                     // operator멤버함수 선언

};




#endif