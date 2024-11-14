#include <iostream>        // iostream 포함
using namespace std;       // std 생략하기 위해서 사용

template <class T>         // template 변수 설정 ㅎㅎ 
T getmax(T x[], int n) {   // 함수 선언 및 정의
	T max;             // 변수 1개 선언
	max = x[0];        // max에 x[0]을 넣어준다
	for (int i = 1; i < n; i++) {       // for문 생성
		if (max < x[i]) max = x[i]; // 조건문이 참이면 max에 x[i]를 넣어준다
	}
	return max;                         // max를 반환
}


int main() {
	int a[5] = { -5, 10, 30, 20, 6 };                           // 정수를 저장할 배열을 생성 및 값 넣어줌
	double b[4] = { 3.14, 1.5, -6.0, 0.5 };                     // 실수를 저장할 배열을 생성 및 값 넣어줌
	char c[3] = { 'a', 'x', 'p' };                              // 문자를 저장할 배열을 생성 및 값 넣어줌
	cout << "정수배열의최대값은" << getmax<int>(a, 5) << endl;    // 함수 호출 및 안내메세지 출력
	cout << "실수배열의최대값은" << getmax<double>(b, 4) << endl; // 함수 호출 및 안내메세지 출력
	cout << "문자배열의최대값은" << getmax<char>(c, 3) << endl;   // 함수 호출 및 안내메세지 출력
}

