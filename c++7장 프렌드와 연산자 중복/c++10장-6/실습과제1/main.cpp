#include <iostream>              // 표준 입출력 사용을 위한 헤더 파일
#include <vector>                // 벡터 포함
using namespace std;             // 표준 네임스페이스 사용

int main() { 
    vector<vector<int>> score= {{2,4,5,-5}, {-2,3,0,-5}};          // 벡터클래스 선언 및 초기화

    vector<int> score1;                                            // 벡터 클래스 선언
    int a;                                                         // 정수를 저장할 변수 1개 선언
    for(int i =0; i<score.at(1).size();i++){                       // for문 작성
        a = score.at(0).at(i) + score.at(1).at(i);                 // a에다가 score.at(0).at(i) + score.at(1).at(i)를 넣어준다
        score1.push_back(a);                                       // score1에다가 a를 넣어준다
    }
    score.push_back(score1);                                       // score에다가 score1을 넣어준다

   for (int j = 0; j < score.at(1).size(); j++){                   // for문 작성
        if(j==2) cout <<endl;                                      // 조건문이 참이면 줄바꿈
        cout << score.at(2).at(j) << '\t';                         // score.at(2).at(j)를 화면에 출력하고 탭 공백 추가
    }

    cout <<endl;                                                   // 줄바꿈

}
