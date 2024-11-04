#include "Book.hpp"                                              // 헤더 파일 포함


Book::Book(string a,int w,int p):write(a),won(w),page(p){}       // 생성자 정의

bool operator==(Book& op ,int a ){                               // operator==함수 정의
    if (a == op.won) return true;                                // 조건문이 참이면 true를 반환
    else return false;                                           // 거짓이면 false를 반환
}

bool operator==(Book& op, string a){                             // operator==함수 정의
    if( a== op.write) return true;                               // 조건문이 참이면 true를 반환                
    else return false;                                           // 거짓이면 false를 반환
}

bool operator==(Book& op,Book& op2 ){                                               // operator==함수 정의
    if((op.write==op2.write)&&(op.won==op2.won)&&(op.page==op2.page)) return true;  // 조건문이 참이면 ture를 반환
    else return false;                                                              // 조건문이 거짓이면 false를 반환
}                             