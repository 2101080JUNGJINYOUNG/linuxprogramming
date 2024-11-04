#include "Power.hpp"
#include <iostream>
using namespace std;
// 클래스 정의 추가
int main() {
    Power a(3, 5), b;
    a.show();
    b.show();
    b = 2*a; // 파워 객체와 정수 곱하기
    a.show();
    b.show();
}
