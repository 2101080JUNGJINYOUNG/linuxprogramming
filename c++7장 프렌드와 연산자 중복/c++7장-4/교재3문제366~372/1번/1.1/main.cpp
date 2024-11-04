#include "Book.hpp"                                   // 헤더파일 포함

int main(void){
    Book a("청춘", 20000,300), b("미래",30000,500);    // Book객체 2개 생성
    a += 500;                                         // a = a+500   
    b -= 500;                                         // a = a-500
    a.show();                                         // a의 멤버함수 호출
    b.show();                                         // b의 멤버함수 호출
}