#include <iostream>              // 표준 입출력을 위한 헤더 파일
#include <vector>                // 벡터 사용을 위한 헤더 파일
using namespace std;             // 표준 네임스페이스 사용

int main() { 
    vector<vector<int>> a = {{-5, 2, 35}, {-20, 5, 100}, {-75, 5, -25}}; // 2차원 벡터 a 선언 및 초기화
    vector<int> best = {a.at(0).at(0), 0, 0}; // 초기값 설정 (사용되지 않지만 구조 유지)

    for(int i = 0; i < a.size(); i++){       // 2차원 벡터 a의 행을 순회하는 반복문
        for(int j = 0; j < a.at(0).size(); j++){ // 각 행의 열을 순회하는 반복문
            if(0 < a.at(i).at(j)){              // 해당 값이 양수인 경우
                a.at(i).at(j) = 255;            // 값을 255로 변경
            }
            else                                // 그렇지 않은 경우
                a.at(i).at(j) = 0;              // 값을 0으로 변경
        }
    }

    cout << "수정행렬" << endl;                  // 수정된 행렬 출력
    for(int i = 0; i < a.size(); i++){          // 수정된 벡터 a의 행을 순회
        for(int j = 0; j < a.at(0).size(); j++){// 각 행의 열을 순회
            cout << a.at(i).at(j) << "\t";      // 수정된 값을 탭으로 구분하여 출력
        }
        cout << endl;                           // 행이 끝날 때 줄바꿈
    }
}
