#include <iostream>             // 입출력 라이브러리 포함
#include <vector>               // 벡터 자료구조를 사용하기 위한 라이브러리 포함
#include <algorithm>            // STL 알고리즘 사용을 위한 라이브러리 포함
using namespace std;            // std 네임스페이스 생략을 위해 사용

int main() {                    // 메인 함수 시작
    string c;                   // 문자열을 저장할 변수 c 선언
    vector<string>::iterator it; // 문자열 벡터의 반복자 it 선언
    vector<string> st;          // 문자열을 저장할 벡터 st 선언

    for (int i = 0; i < 5; i++) { // 5번 반복하여 사용자로부터 문자열 입력받음
        cout << "문자열을 입력하세요: "; // 사용자에게 입력 요청 메시지 출력
        cin >> c;                // 사용자로부터 문자열 입력받기
        st.push_back(c);         // 입력받은 문자열을 벡터 st에 추가
    }

    sort(st.begin(), st.end()); // 벡터 st의 문자열들을 사전순으로 정렬

    cout << "사전에 나오는 순서" << endl; // 사전순 정렬 결과 출력 안내 메시지

    for (it = st.begin(); it < st.end(); it++) // 벡터 st의 모든 원소를 반복
        cout << *it << endl;        // 현재 반복자가 가리키는 문자열 출력

    return 0;                   // 프로그램 종료
}
