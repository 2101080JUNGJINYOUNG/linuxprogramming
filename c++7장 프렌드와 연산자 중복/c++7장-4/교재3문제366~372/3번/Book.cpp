#include "Book.hpp"                                              // 헤더 파일 포함


Book::Book(string a,int w,int p):write(a),won(w),page(p){}       // 생성자 정의

bool Book::operator!(){                                          // operator! 함수 정의
    if(this -> won == 0) return true;                            // 조건문이 참이면 true 반환
    else return false;                                           // 조건문이 거짓이면 false 반환
}