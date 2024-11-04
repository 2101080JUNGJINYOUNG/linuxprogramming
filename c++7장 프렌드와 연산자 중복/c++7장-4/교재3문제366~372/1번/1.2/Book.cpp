#include "Book.hpp"                                              // 헤더 파일 포함


Book::Book(string a,int w,int p):write(a),won(w),page(p){}       // 생성자 정의
void Book::show(){                                               // 멤버함수 정의
    cout<< write << " "<<won<<"원 "<<page<<" 페이지" << endl;     // 멤버변수들을 화면에 출력해준다
}

Book& operator+=(Book& op, int a){                                // operator 멤버함수 정의
    op.won = op.won+a;                                            // op.won에 op.won+a를 넣어준다
    return op;                                                    // op를 리턴해준다        
}
    
Book& operator-=(Book& op, int a){                                 // operator 멤버함수 정의
    op.won = op.won-a;                                            // op.won에 op.won-a를 넣어준다
    return op;                                                    // op를 리턴해준다        
}