#include "Complex.hpp"


Complex::Complex(int r, int i){             // 생성자 정의
        this->real = r; this->img = i;      // real에 r을 넣어주고 img에 i를 넣어준다 
    }

void Complex::show(){                       // 멤버함수 정의
    cout << real << "+" <<img<<"j"<<endl;   // real과 img를 화면에 출력해준다
}



Complex Complex::operator+(Complex a){      // operator 멤버함수 정의
    Complex b;                              // Complex 객체 1개 생성
    b.real = this->real + a.real;           // this->real + a.real의 값을 b.real에 넣어준다
    b.img = this->img + a.img;              // this->img + a.img의 값을 b.img에 넣어준다
    return b;                               // b를 반환해준다
}
