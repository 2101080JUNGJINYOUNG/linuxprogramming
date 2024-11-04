#ifndef _POWER_HPP_                                // 헤더파일이 정의 되있지 않으면 참인 조건문
#define _POWER_HPP_                                // 헤더파일 정의 

#include <iostream>                                // iostream 포함 
using namespace std;                               // std 생략하기 위해서 사용

class Power;                                       // 클래스 선언
Power operator*(int a,Power& op);                  // operator*함수 선언

class Power{                                       // 클래스 생성
    int kick, punch;                               // 멤버변수 2개 선언
public:
    Power(int k=0, int p=0);                       // 생성자 선언
    void show();                                   // 멤버함수 선언
    friend Power operator*(int a,Power& op);       // Power class 멤버접근을 위해서 friend 함수 사용
};


#endif

