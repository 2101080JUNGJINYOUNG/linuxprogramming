#include <iostream>                   // 표준 입출력 라이브러리 포함
#include <string>                     // 문자열 처리를 위한 라이브러리 포함
#include <vector>                     // 벡터 자료구조 사용을 위한 라이브러리 포함
using namespace std;                  // std 네임스페이스 생략을 위해 선언

int main() {                          // 메인 함수 시작
    vector<int> sv;                   // 정수를 저장할 벡터 sv 선언
    int number, min, max;             // 정수를 저장할 변수 number, min, max 선언

    vector<int>::iterator it;         // 벡터의 반복자를 정의

    cout << "정수 4개를 입력하시오:";  // 사용자에게 입력을 요구하는 메시지 출력
    for (int i = 0; i < 4; i++) {     // 4번 반복하여 사용자 입력 받기
        cin >> number;                // 사용자로부터 정수를 입력받아 number에 저장
        sv.push_back(number);         // 입력받은 number를 벡터 sv의 끝에 추가
    }

    min = sv.at(0);                   // 벡터의 첫 번째 요소를 최소값(min)으로 초기화
    max = sv.at(0);                   // 벡터의 첫 번째 요소를 최대값(max)으로 초기화

    for (it = sv.begin() + 1; it != sv.end(); ++it) { // 벡터의 두 번째 요소부터 마지막 요소까지 순회
        if (min > *it) {              // 현재 요소가 min보다 작으면
            min = *it;                // min을 현재 요소로 갱신
        }
        if (max < *it) {              // 현재 요소가 max보다 크면
            max = *it;                // max를 현재 요소로 갱신
        }
    }

    cout << "최대값은  " << max << ", 최소값은 " << min << "입니다." << endl; // 최대값과 최소값 출력

    return 0;                         // 프로그램 종료
}
