#include <iostream>        // 입출력 라이브러리 포함
using namespace std;       // std 생략하기 위해 사용

template <typename T1, typename T2> // 템플릿 클래스 선언
class GClass {                      // GClass 클래스 정의
    T1 data1;                       // 첫 번째 데이터 멤버 선언
    T2 data2;                       // 두 번째 데이터 멤버 선언
public:                             // 공개 멤버 접근 지정자
    GClass();                       // 기본 생성자 선언
    void set(T1 a, T2 b);           // 멤버 변수 설정 함수 선언
    void get(T1& a, T2& b);         // 멤버 변수 반환 함수 선언
    void swap();                    // 멤버 변수 교환 함수 선언
};

template <typename T1, typename T2>       // 템플릿 클래스 정의
GClass<T1, T2>::GClass() {                // 기본 생성자 정의
    data1 = 0;                            // data1을 0으로 초기화
    data2 = 0;                            // data2를 0으로 초기화
}

template <class T1, class T2>             // 템플릿 클래스 정의
void GClass<T1, T2>::set(T1 a, T2 b) {    // 멤버 변수 설정 함수 정의
    data1 = a;                            // data1에 a 값 대입
    data2 = b;                            // data2에 b 값 대입
}

template <class T1, class T2>             // 템플릿 클래스 정의
void GClass<T1, T2>::get(T1& a, T2& b) {  // 멤버 변수 반환 함수 정의
    a = data1;                            // a에 data1 값 대입
    b = data2;                            // b에 data2 값 대입
}

template <typename T1, typename T2>       // 템플릿 클래스 정의
void GClass<T1, T2>::swap() {             // 멤버 변수 교환 함수 정의
    T1 temp;                              // 임시 변수 선언
    temp = data1;                         // temp에 data1 값 저장
    data1 = data2;                        // data1에 data2 값 대입
    data2 = temp;                         // data2에 temp 값 대입
}

int main() {                              // 메인 함수 시작
    int a, b;                             // 정수형 변수 선언
    GClass<int, int> x;                   // 정수형 템플릿 객체 생성
    x.set(2, 5);                          // 객체 x에 2와 5 설정
    x.get(a, b);                          // 객체 x에서 값 가져오기
    cout << "a=" << a << "\t" << "b=" << b << endl; // 값 출력
    x.swap();                             // 객체 x의 멤버 변수 교환
    x.get(a, b);                          // 교환된 값 가져오기
    cout << "a=" << a << "\t" << "b=" << b << endl; // 교환된 값 출력

    double c, d;                          // 실수형 변수 선언
    GClass<double, double> y;             // 실수형 템플릿 객체 생성
    y.set(3.14, 6.28);                    // 객체 y에 3.14와 6.28 설정
    y.get(c, d);                          // 객체 y에서 값 가져오기
    cout << "c=" << c << "\t" << "d=" << d << endl; // 값 출력
    y.swap();                             // 객체 y의 멤버 변수 교환
    y.get(c, d);                          // 교환된 값 가져오기
    cout << "c=" << c << "\t" << "d=" << d << endl; // 교환된 값 출력

    return 0;                             // 메인 함수 종료
}
