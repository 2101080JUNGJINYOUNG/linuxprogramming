#ifndef _POWER_HPP_
#define _POWER_HPP_

#include <iostream>
using namespace std;

class Power{
    int kick, punch;
public:
    Power(int k=0, int p=0);
    void show();
    friend Power operator*(int a,Power& op);
};


#endif

// 전위 연산자
// 결과값을 변수가 되도록 만들고
// 피연산자와 리턴값도 증가 되도록 만들어 준다

// 후위 연산자
// 