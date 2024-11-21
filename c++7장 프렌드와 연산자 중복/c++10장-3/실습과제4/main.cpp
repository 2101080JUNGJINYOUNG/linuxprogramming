#include <iostream>                    // 표준 입출력 라이브러리 포함
#include <string>                      // 문자열 처리를 위한 라이브러리 포함
#include <vector>                      // 벡터 자료구조 사용을 위한 라이브러리 포함
using namespace std;                   // std 네임스페이스 생략을 위해 선언

int main() {                           // 메인 함수 시작
    vector<int> sv;                    // 정수를 저장할 벡터 sv 선언
    int number;                        // 사용자로부터 입력받을 정수 변수 number 선언
    double sum = 0;                    // 합계를 저장할 실수형 변수 sum 선언 및 초기화

    vector<int>::iterator it;          // 벡터의 반복자를 정의

    cout << "숫자를 입력하세요:";         // 사용자에게 숫자를 입력하라는 메시지 출력
    for (int i = 0; i < 5; i++) {      // 5번 반복하여 사용자 입력 받기
        cin >> number;                 // 사용자로부터 정수를 입력받아 number에 저장
        sv.push_back(number);          // 입력받은 number를 벡터 sv의 끝에 추가
    }

    cout << "초기 벡터 원소:";            // 초기 벡터 원소를 출력하기 위한 메시지 출력
    for (it = sv.begin(); it != sv.end(); ++it) { // 벡터의 모든 요소를 순회
        cout << *it << " ";            // 현재 반복자가 가리키는 요소 출력
    }

    cout << endl;                      // 한 줄 띄우기

    for (it = sv.begin(); it != sv.end();) { // 벡터의 모든 요소를 순회
        if (*it < 0)                   // 현재 요소가 음수라면
            it = sv.erase(it);         // 해당 요소를 벡터에서 삭제하고 반복자를 다음 위치로 이동
        else
            it++;                      // 그렇지 않으면 반복자를 다음 위치로 이동
    }

    cout << "음수를 지운 후:";           // 음수를 제거한 후의 벡터 원소를 출력하기 위한 메시지 출력
    for (it = sv.begin(); it != sv.end(); ++it) { // 벡터의 모든 요소를 순회
        cout << *it << " ";            // 현재 반복자가 가리키는 요소 출력
        sum += *it;                    // 현재 요소를 합계에 추가
    }

    cout << endl;                      // 한 줄 띄우기

    sum = sum / sv.size();             // 벡터의 크기로 합계를 나누어 평균값 계산
    cout << "평균값: " << sum << endl; // 계산된 평균값 출력

    return 0;                          // 프로그램 종료
}
