#include "Book.hpp"                                              // 헤더 파일 포함


Book::Book(string a,int w,int p):write(a),won(w),page(p){}       // 생성자 정의
void Book::show(){                                               // 멤버함수 정의
    cout<< write << " "<<won<<"원 "<<page<<" 페이지" << endl;     // 멤버변수들을 화면에 출력해준다
}

Book& Book::operator+=(int a){                                    // operator 멤버함수 정의
    this->won = won+a;                                            // this->won에 won+a의 값을 넣어준다
    return *this;                                                 // 현재 있는 클래스를 참조하여 값을 받아 반환해준다
}
    
Book& Book::operator-=(int a){                                    // operator 멤버함수 정의
    this->won = won-a;                                            // this->won에 won-a의 값을 넣어준다             
    return *this;                                                 // 현재 있는 클래스를 참조하여 값을 받아 반환해준다
}