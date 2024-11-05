#include "Color.hpp"                         // 헤더파일 포함                     

int main(void){
    Color red(255,0,0), blue(0,0,255),c;     // Color 객체 3개 생성
    c = red + blue;                          // operator 멤버함수를 호출하여 값을 반환하여 c에 넣어준다
    c.show();                                // 멤버함수 호출

    Color fuchsia(255, 0, 255);              // Color 객체 1개 생성
    if(c == fuchsia)                         
        cout <<"보라색 맞음"<<endl;           // 조건문이 참이면 안내메세지 출력
    else
        cout << "보라색 아님"<<endl;          // 조건문이 거짓이면 안내메세지 출력
}