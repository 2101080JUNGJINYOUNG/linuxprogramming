#include "Color.hpp"                                              // 헤더 파일 포함


Color::Color(int aa,int bb,int cc):a(aa),b(bb),c(cc){}            // 생성자 선언           

void Color::show(){                                               // 멤버함수 정의
    cout << a << " " << b << " " << c << endl;                    // 멤버변수 a,b,c를 화면에 출력해준다
}                                
            
Color Color::operator+(Color op){                                 // operator+ 멤버함수 정의 
    Color tmp;                                                    // Color 객체 1개 생성
    tmp.a = this->a +op.a;                                        // tmp.a에 this->a +op.a를 넣어준다
    tmp.b = this->b + op.b;                                       // tmp.b에 this->b +op.b를 넣어준다
    tmp.c = this->c + op.c;                                       // tmp.c에 this->c +op.c를 넣어준다
    return tmp;                                                   // tmp를 반환해준다
} 

bool Color::operator==(Color op){                                 // operator== 멤버함수 정의
    if((this->a==op.a)&&(this->b==op.b)&&(this->c==op.c))         
        return true;                                              // 조건문이 참이면 true 반환
    else 
        return false;                                             // 조건문이 거짓이면 false 반환
}