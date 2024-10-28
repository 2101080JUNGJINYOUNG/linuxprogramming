#include "complex.hpp"                                          // complex 헤더파일 포함

Complex::Complex(int r, int i) :real(r), img(i) {               // 타켓생성자 정의
	cout << "복소수 " << real << "+ "<< img<<"j 생성" << endl;   // 화면에 출력
}

void Complex::show() {                                          // Complex내에 있는 멤버함수 정의
	cout << "복소수 " << real << "+ "<< img<<"j" << endl;        // 화면에 출력
}

Complex Complexadd(Complex a, Complex b){                       // 함수 정의
	Complex c;                                                  // Complex 객체 생성
	c.real = a.real+b.real;                                     // c.real을 재정의
	c.img = a.img+b.img;                                        // c.img를 재정의
	return c;                                                   // 객체 c를 반환해준다
}

