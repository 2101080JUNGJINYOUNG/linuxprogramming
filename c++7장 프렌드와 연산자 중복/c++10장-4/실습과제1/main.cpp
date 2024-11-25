#include <iostream>             // 입출력 라이브러리 포함
#include <vector>               // 벡터 자료구조를 사용하기 위한 라이브러리 포함
#include <algorithm>            // STL 알고리즘 사용을 위한 라이브러리 포함
using namespace std;            // std 네임스페이스 사용

int main() {                    // 메인 함수 시작
    int a;                      // 정수를 저장할 변수 선언
    vector<int> v;              // 정수를 저장할 벡터 v 선언
    vector<int>::iterator it, itt; // 벡터의 반복자 it, itt 선언

    cout << "정수 4개를 입력하시오:"; // 사용자에게 입력 안내 메시지 출력

    for (int i = 0; i < 4; i++) {   // 4번 반복하여 정수를 입력받음
        cin >> a;                   // 사용자로부터 정수 입력받기
        v.push_back(a);             // 입력받은 정수를 벡터 v에 추가
    }

    it = max_element(v.begin(), v.end()); // 벡터에서 최대값의 반복자 찾기
    cout << "최대값은 " << distance(v.begin(), it) + 1 // 최대값의 인덱스 출력 (1부터 시작)
         << "번째 값 " << *it << endl;   // 최대값 출력

    it = min_element(v.begin(), v.end()); // 벡터에서 최소값의 반복자 찾기
    cout << "최소값은 " << distance(v.begin(), it) + 1 // 최소값의 인덱스 출력 (1부터 시작)
         << "번째 값 " << *it << endl;   // 최소값 출력

    sort(v.begin(), v.end());           // 벡터 v를 오름차순으로 정렬
    cout << "오름차순 결과는 ";         // 오름차순 정렬 결과 출력 메시지
    for (it = v.begin(); it < v.end(); it++) // 벡터 v의 모든 원소 출력
        cout << *it << " ";             // 각 원소를 공백으로 구분하여 출력
    cout << endl;                       // 줄바꿈

    sort(v.begin(), v.end(), std::greater<int>()); // 벡터 v를 내림차순으로 정렬
    cout << "내림차순 결과는 ";          // 내림차순 정렬 결과 출력 메시지
    for (it = v.begin(); it < v.end(); it++) // 벡터 v의 모든 원소 출력
        cout << *it << " ";             // 각 원소를 공백으로 구분하여 출력
    cout << endl;                       // 줄바꿈

    return 0;                           // 프로그램 종료
}
