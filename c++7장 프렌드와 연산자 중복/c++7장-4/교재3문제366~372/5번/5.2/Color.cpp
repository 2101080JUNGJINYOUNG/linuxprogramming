#include "Color.hpp"                                              // 헤더 파일 포함


Color::Color(int aa,int bb,int cc):a(aa),b(bb),c(cc){}            // 생성자 선언           

void Color::show(){                                               // 멤버함수 정의
    cout << a << " " << b << " " << c << endl;                    // 멤버변수 a,b,c를 화면에 출력해준다
}                                
            
Color operator+(Color op1,Color op2){                             // operator+ 함수 정의 
    Color tmp;                                                    // Color 객체 1개 생성
    tmp.a = op1.a +op2.a;                                         // tmp.a에 op1.a +op2.a를 넣어준다
    tmp.b = op1.b +op2.b;                                         // tmp.b에 op1.b +op2.b를 넣어준다
    tmp.c = op1.c +op2.c;                                         // tmp.c에 op1.c +op2.c를 넣어준다
    return tmp;                                                   // tmp를 반환해준다
} 

bool operator==(Color op1,Color op2){                             // operator== 함수 정의
    if((op1.a==op2.a)&&(op1.b==op2.b)&&(op1.c==op2.c))         
        return true;                                              // 조건문이 참이면 true 반환
    else 
        return false;                                             // 조건문이 거짓이면 false 반환
}