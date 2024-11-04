#include "Book.hpp"                                              // 헤더 파일 포함


Book::Book(string a,int w,int p):title(a),price(w),pages(p){}    // 생성자 정의

string Book::getTitle(){return title;}                           // 멤버함수를 정의하고 title을 반환해준다

void Book::show(){                                               // 멤버함수 정의
    cout<< title << " "<<price<<"원 "<<pages<<" 페이지" << endl;  // 멤버변수들을 화면에 출력해준다
}

bool Book::operator!(){                                          // operator! 함수 정의
    if(this -> price == 0) return true;                          // 조건문이 참이면 true 반환
    else return false;                                           // 조건문이 거짓이면 false 반환
}