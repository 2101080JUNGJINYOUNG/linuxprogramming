#include <iostream> // 표준 입출력 사용을 위한 헤더 파일
using namespace std; // 표준 네임스페이스 사용

// grade 클래스 선언
class grade {
    int a[3][4]; // 3명의 학생과 각 학생의 4가지 점수를 저장할 배열 (4번째는 평균점수)
public:
    grade(); // 기본 생성자 선언
    void in(int c, int d, int gradd); // 학생 점수를 입력받는 멤버 함수 선언
    void bestshow(); // 최고 평균 점수를 가진 학생을 출력하는 멤버 함수 선언
};

// grade 클래스 생성자 정의
grade::grade() {
    a[3][4] = {0}; // 배열 초기화 (모든 값을 0으로 설정)
}

// 학생 점수를 입력받는 멤버 함수 정의
void grade::in(int c, int d, int gradd) {
    a[c][d] = gradd; // 특정 학생(c)의 특정 과목(d)의 점수(gradd)를 저장
}

// 최고 평균 점수를 가진 학생을 출력하는 멤버 함수 정의
void grade::bestshow() {
    int maxim, best; // 최고 점수(maxim)와 해당 학생 번호(best)를 저장할 변수
    for (int i = 0; i < 3; i++) { // 각 학생을 순회
        maxim = 0; // 각 학생의 총점을 계산하기 위해 초기화
        for (int j = 0; j < 3; j++) { // 각 학생의 과목 점수를 순회
            maxim += a[i][j]; // 각 과목의 점수를 더함
        }
        a[i][4] = maxim / 3; // 평균 점수를 계산하여 배열의 4번째 열에 저장
        if (i == 2) { // 마지막 학생까지 계산이 끝났을 때
            maxim = a[0][4]; // 첫 번째 학생의 평균 점수를 초기 최고 점수로 설정
            best = 1; // 초기 최고 학생 번호는 1번 학생
            for (int i = 1; i < 3; i++) { // 나머지 학생들의 평균 점수 비교
                if (maxim < a[i][4]) { // 더 높은 평균 점수를 가진 학생이 있으면
                    maxim = a[i][4]; // 최고 점수를 갱신
                    best = i + 1; // 최고 점수를 가진 학생 번호를 갱신
                }
            }
            // 최고 평균 점수를 가진 학생과 그 점수를 출력
            cout << "최우수 학생은 " << best << "번째 학생이고 평균 점수는 " << maxim << "점이다." << endl;
        }
    }
}

// 메인 함수 정의
int main() {
    grade pp; // grade 클래스 객체 생성
    int gradee; // 점수를 입력받을 변수
    for (int i = 0; i < 3; i++) { // 3명의 학생 순회
        cout << i + 1 << "번째 학생의 국어, 영어, 수학 성적을 입력: "; // 입력 안내 메시지 출력
        for (int j = 0; j < 3; j++) { // 각 학생의 3과목 점수를 입력받음
            cin >> gradee; // 점수 입력
            pp.in(i, j, gradee); // 입력받은 점수를 객체에 저장
        }
    }
    pp.bestshow(); // 최고 평균 점수를 가진 학생을 출력
}
