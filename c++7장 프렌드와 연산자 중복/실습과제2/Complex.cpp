#include "Complex.hpp"                               // 헤더파일 포함


Complex::Complex(int r, int i){                     // 생성자 정의
        this->real = r;                             // real에 r을 넣어준다
        this->img = i;                              // img에 i를 넣어준다
    }


void Complex::show(){                                // 멤버함수 정의
    cout << real << "+"<<img<<"j"<<endl;             // img와 real을 화면에 출력해준다
}


Complex Complex::operator *(Complex a){              // 멤버함수 정의
    Complex b;                                       // Complex 객체 생성
    b.real = (this->real* a.real)-(this->img*a.img); // 연산을 해서 b.real에 넣어준다
    b.img = (this->real*a.img)+(this->img*a.real);   // 연산을 해서 b.img에 넣어준다
    return b;                                        // Complex 객체 b를 반환해준다
}