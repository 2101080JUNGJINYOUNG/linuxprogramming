#include "complex2.hpp"                                    // 헤더파일 포함

Complex ComplexManager::ComplexAdd(Complex a, Complex b){  // ComplexManager의 멤버함수 정의
    Complex c;                                             // Complex 객체 생성
    c.real = a.real+b.real;                                // c.real에 a.real+b.real를 넣어준다.
    c.img = a.img +b.img;                                  // c.img에 a.img+b.img를 넣어준다.
    return c;
}

Complex::Complex(int r,int i):real(r),img(i){              // Complex 타켓생성자 정의
    cout<<"복소수 "<< real <<"+ "<< img <<"j 생성" <<endl;  // 화면에 출력
}

void Complex::show(){                                       // 멤버함수 정의
    cout << real <<"+ "<< img <<"j"<<endl;                  // 화면에 출력
}

