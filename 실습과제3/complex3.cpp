#include "complex3.hpp"                                     // 헤더파일 포함

Complex ComplexManager::ComplexAdd(Complex a, Complex b){   // ComplexManager의 멤버함수 정의
    Complex c;                                              // Complex 객체 생성
    c.real = a.real+b.real;                                 // c.real에 a.real+b.real를 넣어준다
    c.img = a.img +b.img;                                   // c.img에 a.img+b.img를 넣어준다
    return c;                                               // 객체 c를 반환한다.
}

Complex ComplexManager::ComplexSub(Complex a, Complex b){   // ComplexManager의 멤버함수 정의
    Complex d;                                              // Complex 객체 생성                                           
    d.real = a.real-b.real;                                 // d.real에 a.real-b.real를 넣어준다.
    d.img = a.img -b.img;                                   // d.img에 a.img -b.img를 넣어준다.
    return d;                                               // 객체 d를 반환해준다.
}

Complex::Complex(int r,int i):real(r),img(i){}              // 타켓 생성자 정의

void Complex::show(){                                       // Complex의 멤버함수 정의
    cout << real <<"+ "<< img <<"j"<<endl;                  // 화면에 메세지 출력
}

