#include "NamedCircle.hpp"                                           // 헤더파일 포함

int main() { 

    NamedCircle pizza[5]; int r,max=0; string b;                        // 객체 배열을 생성하고 정수를 저장할 변수 2개, 그리고 문자열을 저장할 변수 1개 선언
    cout << "5 개의 정수 반지름과 원의 이름을 입력하세요"<<endl;          // 안내메세지 출력

    
    for(int i =0; i<5;i++){                                             // 반복문 생성
        cout << i+1 << ">> ";                                           // i+1과 안내메세지 출력
        cin >> r >> b;                                                  // r과 b를 입력받는다
        pizza[i].setRadius(r);                                          // 멤버 함수 호출
        pizza[i].setName(b);                                            // 멤버 함수 호출
        if(pizza[max].getArea() < pizza[i].getArea()) max=i;            // 조건문이 참이면 max에 i를 넣어준다
        
    }
    cout << "가장 면적이 큰 피자는 " << pizza[max].getName() <<"입니다."<<endl;  // pizza[max].getName()과 안내메세지를 화면에 출력
}

 