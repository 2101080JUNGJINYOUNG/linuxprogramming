#include <iostream>             // 입출력 라이브러리 포함
#include <vector>               // 벡터 자료구조를 사용하기 위한 라이브러리 포함
#include <algorithm>            // STL 알고리즘 사용을 위한 라이브러리 포함
using namespace std;            // std 네임스페이스 생략을 위해 사용

// Student 클래스 선언
class Student {
    string name;                // 학생 이름을 저장할 변수
    int grade;                  // 학생 점수를 저장할 변수
public:
    Student(string a = "", int b = 0); // 생성자 선언 (기본값 제공)
    bool operator<(Student& str);     // 비교 연산자 '<' 오버로딩
    string getname();                 // 학생 이름 반환 함수 선언
    int getgrade();                   // 학생 점수 반환 함수 선언
};

// Student 생성자 정의
Student::Student(string a, int b) {
    name = a;                   // 이름 멤버 초기화
    grade = b;                  // 점수 멤버 초기화
}

// 비교 연산자 '<' 오버로딩 정의
bool Student::operator<(Student& str) {
    return this->grade < str.grade; // 점수를 기준으로 비교
}

// 학생 이름 반환 함수 정의
string Student::getname() {
    return name;                // 이름 반환
}

// 학생 점수 반환 함수 정의
int Student::getgrade() {
    return grade;               // 점수 반환
}

int main() {                    // 메인 함수 시작
    string c;                   // 이름 입력받을 변수 선언
    int d;                      // 점수 입력받을 변수 선언
    vector<Student>::iterator it; // Student 벡터의 반복자 선언
    vector<Student> st;         // Student 객체를 저장할 벡터 선언

    for (int i = 0; i < 3; i++) { // 3번 반복하여 학생 정보 입력받음
        cout << "이름과 성적을 입력: "; // 입력 안내 메시지 출력
        cin >> c >> d;           // 사용자로부터 이름과 점수 입력받기
        st.push_back(Student(c, d)); // 입력받은 이름과 점수로 Student 객체 생성 후 벡터에 추가
    }

    // 벡터 st에서 점수가 가장 높은 학생 찾기
    it = max_element<vector<Student>::iterator>(st.begin(), st.end());

    cout << "최우수학생은" << endl << "이름:"; // 최우수 학생 출력 안내 메시지
    cout << it->getname() << endl << "성적:"; // 최우수 학생 이름 출력
    cout << it->getgrade() << endl;          // 최우수 학생 점수 출력

    return 0;                   // 프로그램 종료
}
