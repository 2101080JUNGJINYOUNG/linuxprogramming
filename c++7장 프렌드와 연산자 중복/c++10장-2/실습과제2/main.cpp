#include <iostream>        // 입출력 라이브러리 포함
using namespace std;       // std 네임스페이스 생략을 위해 사용

// 템플릿 클래스 Container 정의
template <class T1>        // 템플릿 매개변수 T1 선언
class Container {
    T1 *data;              // 동적 배열을 위한 포인터
    int count;             // 배열의 크기
public:
    Container(int a);      // 생성자 선언
    void set(int a, T1 b); // 특정 인덱스에 값 설정 함수 선언
    T1 get(int i);         // 특정 인덱스의 값 반환 함수 선언
    ~Container();          // 소멸자 선언
};

// 생성자 정의 (템플릿 클래스)
template <class T1>
Container<T1>::Container(int a) {
    count = a;             // 배열 크기 설정
    data = new T1[count];  // 동적 메모리 할당
}

// 특정 인덱스에 값 설정하는 함수 정의
template <class T1>
void Container<T1>::set(int a, T1 b) {
    data[a] = b;           // 배열의 a번째 인덱스에 b 값 대입
}

// 특정 인덱스의 값을 반환하는 함수 정의
template <class T1>
T1 Container<T1>::get(int i) {
    return data[i];        // 배열의 i번째 값 반환
}

// 소멸자 정의 (동적 메모리 해제)
template <class T1>
Container<T1>::~Container() {
    delete[] data;         // 동적 배열 메모리 해제
}

// 메인 함수 정의
int main() {
    Container<char> c(26); // 26 크기의 문자형 Container 객체 생성

    for (int i = 0; i < 26; i++)         // 알파벳 소문자 저장
        c.set(i, 'a' + i);               // i번째 인덱스에 'a'+i 문자 저장

    for (int i = 25; i >= 0; i--)        // 저장된 문자 역순으로 출력
        cout << c.get(i);                // i번째 인덱스의 문자 출력
    cout << endl;                        // 줄바꿈 출력

    return 0;                            // 프로그램 종료
}
