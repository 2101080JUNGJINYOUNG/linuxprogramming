#include "Complex.hpp"                                           // 헤더파일 포함

Complex::Complex(int r, int i):real(r),img(i){                   // 생성자 정의
    cout <<"복소수 " << real << "+ " << img<<"j 생성"<<endl;      // real과 img를 화면에 출력해준다.
}

void Complex::show(){                                             // 멤버함수 정의
    cout<< " "<< real << "+ "<< img << "j"<<endl;                 // real과 img를 화면에 출력해줍니다.
}

void Complex::operator++(){                                       // operator 멤버함수 정의
    real++;                                                       // real에 1을 더해준다
    img++;                                                        // img에 1을 더해줍니다
}

void Complex::operator--(int a){                                   // operator 멤버함수 정의
    real--;                                                        // real에 -1을 더해줍니다
    img--;                                                         // img에 -1을 더해줍니다
}