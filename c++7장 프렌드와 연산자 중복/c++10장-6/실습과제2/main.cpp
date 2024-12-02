#include <iostream>              // 표준 입출력 사용을 위한 헤더 파일
#include <vector>                // 벡터 사용을 위한 헤더 파일
using namespace std;             // 표준 네임스페이스 사용

int main() { 
    vector<vector<int>> score;   // 2차원 벡터 score 선언 (학생들의 점수를 저장)
    int a, b;                    // 점수 입력과 평균 계산을 위한 변수 a와 b 선언

    for(int i = 0; i < 3; i++){  // 3명의 학생 정보를 입력받기 위한 반복문
        cout << i + 1 << "번째 학생의 국어,영어,수학 성적을 입력:"; // 학생별 과목 점수 입력 안내
        vector<int> score1;      // 각 학생의 점수를 저장할 1차원 벡터 score1 선언
        b = 0;                   // 평균 계산을 위한 누적 점수 변수 초기화

        for(int j = 0; j < 3; j++){  // 한 학생의 국어, 영어, 수학 점수를 입력받는 반복문
            cin >> a;               // 점수 입력받기
            score1.push_back(a);    // 입력받은 점수를 score1 벡터에 추가
            b += a;                 // 누적 점수에 추가

            if(j == 2){             // 세 번째 점수(수학)를 입력받은 후 평균 계산
                b = b / 3;          // 평균 점수 계산
                score1.push_back(b);// 계산된 평균 점수를 score1에 추가
            }
        }
        score.push_back(score1);    // 각 학생의 점수를 score 벡터에 추가
    }

    b = 0;                          // 최우수 학생을 찾기 위한 인덱스 변수 초기화

    for(int i = 1; i < score.size(); i++){ // 두 번째 학생부터 비교 시작
        if(score.at(b).at(3) < score.at(i).at(3)) // 현재 최우수 학생과 비교
            b = i;                  // 평균 점수가 더 높으면 b에 해당 학생 인덱스 저장
    }

    cout << "최우수 학생은 " << b + 1 << "번째 학생이고 평균 점수는 " 
         << score.at(b).at(3) << "점이다." << endl; // 최우수 학생 정보 출력
}
