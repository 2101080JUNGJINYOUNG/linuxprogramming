#include "Book.hpp"                                                // 헤더파일 포함

int main(void){
    Book a("명품 C++",30000,500), b("고품 C++", 30000, 500);        // Book 객체 2개 생성
    if(a==30000) cout << "정가 30000원"<< endl;                     // 조건문이 참이면 안내메세지 출력
    if(a=="명품 C++") cout << "명품 C++입니다."<< endl;              // 조건문이 참이면 안내메세지 출력
    if(a==b) cout << "두 책이 같은 책입니다."<< endl;                // 조건문이 참이면 안내메세지 출력
}