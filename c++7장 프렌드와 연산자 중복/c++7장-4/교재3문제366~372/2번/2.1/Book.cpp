#include "Book.hpp"                                                           // 헤더 파일 포함


Book::Book(string a,int w,int p):write(a),won(w),page(p){}                    // 생성자 정의

bool Book::operator==(int a ){                                                // operator==함수 정의
    if (a == won) return true;                                                // 조건문이 참이면 true를 반환
    else return false;                                                        // 거짓이면 false를 반환
}

bool Book::operator==(string a){                                              // operator==함수 정의
    if( a== write) return true;                                               // 조건문이 참이면 true를 반환                
    else return false;                                                        // 거짓이면 false를 반환
}

bool Book::operator==(Book& op){                                              // operator==함수 정의
    if((op.write==write)&&(op.won==won)&&(op.page==page)) return true;        // 조건문이 참이면 ture를 반환
    else return false;                                                        // 조건문이 거짓이면 false를 반환
}                             