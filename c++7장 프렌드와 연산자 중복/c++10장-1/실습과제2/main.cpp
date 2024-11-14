#include<iostream>                                               // iostream 포함
using namespace std;                                             // std 생략하기 위해서 사용
class Circle {                                                   // 클래스 생성
	int radius;                                              // 정수를 저장할 멤버변수 선언
public:
	Circle(int radius = 1) { this->radius = radius; }        // 생성자를 선언하고 정의
	int getRadius() { return radius; }                       // 멤버함수를 선언하고 정의
	bool operator > (Circle other) {                        
		return this->radius > other.radius;              // operator 함수를 선언하고 정의
	}
};

template <class T>                                               // template 멤버변수를 선언하고 정의
T bigger(T a, T b) {                                             // 두개의매개변수를비교하여큰값을리
	if (a > b) return a;
	else return b;
}



int main() {
	int a = 20, b = 50, c;                                            // 정수를 저장할 변수 3개 선언 
	c = bigger(a, b);                                                 // 함수 호출
	cout << "20과 50중 큰 값은" << c << endl;                          // 안내메세지 및 변수를 화면에 출력
	Circle donut(10), pizza(20), y;                                   // Circle 객체 3개 생성
	y = bigger(donut, pizza);                                         // 함수 호출
	cout << "donut과 pizza중 큰 반지름은 " << y.getRadius() << endl;   // 안내메세지 및 함수 반환값 화면에 출력
}
