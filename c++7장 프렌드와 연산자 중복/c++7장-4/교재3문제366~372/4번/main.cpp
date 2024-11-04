#include "Book.hpp"                   // 헤더파일 포함                                     // 헤더파일 포함

int main(void){
    Book a("청춘",20000,300);         // Book 클래스 객체 1개 생성
    string b;                         // 문자열 객체 1개 생성
    cout << "책 이름을 입력하세요>>";   // 안내메세지 출력
    getline(cin,b);                   // 키보드로 문자열로 책 이름을 입력받아 저장
    if(b<a)
        cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" <<endl; // 조건문이 참이면 안내메세지 출력
    else
        cout << a.getTitle() << "이 " <<b<< "보다 앞에 있구나!" <<endl;   // 조건문이 거짓이면 안내메세지 출력
    return 0;                                                            // 0을 외부로 반환
}