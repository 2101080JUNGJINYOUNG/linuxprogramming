#include "Book.hpp"                                     // 헤더파일 포함

int main(void){
    Book book("벼룩시장", 0, 50);                       // Book 객체 1개 생성
    if(!book) cout<< "공짜다" <<endl;                   // 조건문이 참이면 안내메세지 출력
    else cout << "공짜가 아니다"<<endl;                 // 조건문이 거짓이면 안내메세지 출력
}