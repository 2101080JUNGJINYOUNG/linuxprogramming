#ifndef _BOOK_HPP_                         // 헤더 파일을 정의하고 있지 않으면 참인 조건문
#define _BOOK_HPP_                         // 헤더 파일 정의

#include <iostream>                        // iostream  포함
using namespace std;                       // std를 생략하기 위하여 사용

class Book{                                // Book 클래스 생성
    string write;                          // string 객체 1개 선언
    int won, page;                         // 정수를 저장할 멤버변수 2개 선언
public:
    Book(string a="",int w=0,int p=0);     // 생성자 선언
    bool operator!();                      // operator! 함수 선언
};

#endif