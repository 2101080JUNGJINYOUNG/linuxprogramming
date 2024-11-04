#include "Book.hpp"                                              // 헤더 파일 포함


Book::Book(string a,int w,int p):title(a),price(w),pages(p){}    // 생성자 정의
void Book::show(){                                               // 멤버함수 정의
    cout<< title << " "<<price<<"원 "<<pages<<" 페이지" << endl;  // 멤버변수들을 화면에 출력해준다
}

string Book::getTitle(){                                          // 멤버함수 정의
    return title;                                                 // title를 반환해준다
}

Book& operator+=(Book& op, int a){                                // operator 멤버함수 정의
    op.price = op.price+a;                                        // op.price에 op.price+a를 넣어준다
    return op;                                                    // op를 리턴해준다        
}
    
Book& operator-=(Book& op, int a){                                 // operator 멤버함수 정의
    op.price = op.price-a;                                         // op.price에 op.price-a를 넣어준다
    return op;                                                     // op를 리턴해준다        
}