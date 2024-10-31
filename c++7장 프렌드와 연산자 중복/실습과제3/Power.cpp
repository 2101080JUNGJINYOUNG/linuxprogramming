#include "Power.hpp"

Power::Power(int k, int p){                    // 생성자 정의
    this->kick = k; this->punch = p;           // kick에 k를 넣어주고 punch에 p를 넣어준다
}

void Power::show() {                                                  // 멤버함수 정의
        cout << "kick=" << kick << ", " << "punch=" << punch << endl; // kick과 punch를 화면에 출력해준다
}

Power Power::operator-(int a){                                        // operator멤버함수 정의
    Power b;                                                          // Power 객체 1개 생성
    b.kick = this->kick -a;                                           // this->kick -a의 값을 b.kick에 넣어준다.
    b.punch = this->punch -a;                                         // this->punch -a의 값을 b.punch에 넣어준다.
    return b;                                                         // b를 반환해준다
}