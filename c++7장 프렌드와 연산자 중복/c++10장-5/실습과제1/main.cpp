#include <iostream> // 표준 입출력 사용을 위한 헤더 파일
using namespace std; // 표준 네임스페이스 사용

// opt 클래스 선언
class opt {
    int a[2][2]; // 2x2 배열을 통해 행렬 표현
public:
    opt(int b, int c, int d, int e); // 매개변수를 가지는 생성자 선언
    opt operator+(opt& str); // '+' 연산자 오버로딩 함수 선언
    void show(); // 행렬을 출력하는 멤버 함수 선언
};

// opt 클래스 생성자 정의
opt::opt(int b=0, int c=0, int d=0, int e=0) { // 기본값을 가지는 생성자
    a[0][0] = b; // 첫 번째 행 첫 번째 원소 초기화
    a[0][1] = c; // 첫 번째 행 두 번째 원소 초기화
    a[1][0] = d; // 두 번째 행 첫 번째 원소 초기화
    a[1][1] = e; // 두 번째 행 두 번째 원소 초기화
}

// '+' 연산자 오버로딩 함수 정의
opt opt::operator+(opt& str) { 
    opt str2; // 연산 결과를 저장할 객체 생성
    for(int i = 0; i < 2; i++) { // 행 순회
        for(int j = 0; j < 2; j++) { // 열 순회
            str2.a[i][j] = this->a[i][j] + str.a[i][j]; // 각 원소 더하기
        }
    }
    return str2; // 결과 객체 반환
}

// 행렬을 출력하는 멤버 함수 정의
void opt::show() { 
    for(int i = 0; i < 2; i++) { // 행 순회
        for(int j = 0; j < 2; j++) { // 열 순회
            cout << this->a[i][j] << " "; // 원소 출력
        }
        cout << endl; // 한 행 출력 후 줄바꿈
    }
}

// 메인 함수 정의
int main() { 
    opt a(2, 4, 5, -5), b(-2, 3, 0, -5), c; // opt 객체 생성 및 초기화
    c = a + b; // '+' 연산자 오버로딩을 사용한 행렬 덧셈

    cout << "연산결과:" << endl; // 연산 결과 출력 메시지
    c.show(); // 결과 행렬 출력
}
