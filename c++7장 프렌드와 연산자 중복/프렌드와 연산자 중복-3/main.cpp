// **********************************************
// 제 목 :  ComplexManager클래스의멤버함수로ComplexAdd, ComplexSub를선언하고다음코드가실행되도록작성하시오.   
// 날 짜 :  2024년 10월28일
// 작성자 : 2101080 정진용
// **********************************************
#include "complex3.hpp"                 // 헤더파일 포함
int main() {
    Complex x(5, 5), y(2, 2), sum, sub; // 객체 4개 생성
    ComplexManager man;                 // 객체 1개 생성
    sum = man.ComplexAdd(x, y);         // 멤버함수를 호출하여 sum에 넣어준다
    cout<< "두 복소수의 합은";           // 안내메세지 출력
    sum.show();                         // 멤버함수 호출
    sub = man.ComplexSub(x, y);         // 멤버함수를 호출하여 sub에 넣어준다
    cout<< "두 복소수의 차는";           // 안내메세지 출력
    sub.show();                         // 멤버함수 호출
    return 0;                           // 0을 외부로 반환
}