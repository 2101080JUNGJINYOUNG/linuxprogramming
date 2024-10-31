// **********************************************
// 제 목 : 과제1번의전역함수ComplexAdd를ComplexManager클래스의멤버함수로선언하고다음코드가실행되도록작성하시오.   
// 날 짜 : 2024년10월28일
// 작성자: 2101080 정진용
// *********************************************

#include "complex2.hpp"                    // 헤더파일 포함
int main() {
    Complex x(2, 3), y(-5, 10), sum;       // Complex 객체 3개 선언
    ComplexManager man;                    // ComplexManager 객체 1개 선어ㄴ
    sum = man.ComplexAdd(x, y);            // 멤버함수를 호출하여 sum에 넣어준다
    cout<< "두복소수의합은";                // 안내메세지 출력
    sum.show();                           // 멤버 함수 호출
    return 0;                             // 0을 외부로 반환
 }