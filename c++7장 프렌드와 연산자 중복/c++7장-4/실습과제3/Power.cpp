 #include "Power.hpp"                                   // 헤더파일 포함


Power::Power(int k, int p):kick(k),punch(p){}           // 생성자 정의

void Power::show(){                                     // 멤버함수 정의
    cout << "kick="<<kick<<",punch="<<punch<<endl;      // kick과 punch를 화면에 출력해준다
}

Power operator*(int a,Power& op){                       // operator*함수 정의
    Power tmp;                                          // tmp 생성
    tmp.kick = a*op.kick;                               // tmp.kick에다가 a*op.kick을 넣어준다
    tmp.punch = a*op.punch;                             // tmp.punch에다가 a*op.punch을 넣어준다
    return tmp;                                         // tmp를 반환해준다.
}