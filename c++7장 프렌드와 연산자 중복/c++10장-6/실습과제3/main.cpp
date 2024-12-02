#include <iostream>              // 표준 입출력을 위한 헤더 파일
#include <vector>                // 벡터 사용을 위한 헤더 파일
using namespace std;             // 표준 네임스페이스 사용

int main() { 
    vector<vector<int>> a = {{-5, 2, 35}, {-20, 5, 100}, {-75, 5, -25}}; // 2차원 벡터 a 선언 및 초기화
    vector<int> best = {a.at(0).at(0), 0, 0}; // 최대값과 위치를 저장할 벡터 best 초기화

    for(int i = 0; i < a.size(); i++){       // 2차원 벡터 a의 행을 순회하는 반복문
        for(int j = 0; j < a.at(0).size(); j++){ // 각 행의 열을 순회하는 반복문
            if(best.at(0) < a.at(i).at(j)){      // 현재 저장된 최대값과 비교
                best.at(0) = a.at(i).at(j);      // 최대값을 업데이트
                best.at(1) = i;                  // 최대값의 행 위치를 업데이트
                best.at(2) = j;                  // 최대값의 열 위치를 업데이트
            }
        }
    }

    // 최대값 출력
    cout << "최대값은 " << best.at(0) << endl; // 최대값 출력
    cout << "위치는 " << best.at(1) + 1 << "행 " << best.at(2) + 1 << "열" << endl; // 위치 출력
}
