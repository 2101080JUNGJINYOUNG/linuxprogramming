#include <iostream>                    // 표준 입출력 라이브러리 포함
#include <string>                      // 문자열 처리를 위한 라이브러리 포함
#include <vector>                      // 벡터 자료구조 사용을 위한 라이브러리 포함
using namespace std;                   // std 네임스페이스 생략을 위해 선언

int main() {                           // 메인 함수 시작
    vector<string> sv;                 // 문자열을 저장할 벡터 sv 선언
    string name;                       // 사용자로부터 입력받을 문자열 변수 name 선언

    vector<string>::iterator it;       // 벡터의 반복자를 정의

    cout << "이름을 5개 입력하라:" << endl; // 사용자에게 입력을 요구하는 메시지 출력
    for (int i = 0; i < 5; i++) {      // 5번 반복하여 사용자 입력 받기
        cout << i + 1 << "번째 이름: "; // 현재 몇 번째 입력인지 안내 메시지 출력
        cin >> name;                   // 사용자로부터 이름을 입력받아 name에 저장
        sv.push_back(name);            // 입력받은 name을 벡터 sv의 끝에 추가
    }

    name = sv.at(0);                   // 벡터의 첫 번째 요소를 초기 값으로 설정

    for (it = sv.begin() + 1; it != sv.end(); ++it) { // 벡터의 두 번째 요소부터 마지막 요소까지 순회
        if (name < *it) {              // 현재 저장된 name이 현재 요소보다 사전적으로 앞에 있으면
            name = *it;                // name을 현재 요소로 갱신
        }
    }

    cout << "사전에서 가장 뒤에 나오는 이름은 " << name << "입니다." << endl; // 결과 출력

    return 0;                          // 프로그램 종료
}
