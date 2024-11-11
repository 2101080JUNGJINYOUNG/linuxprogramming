#include "TV.hpp"                                           // 헤더파일 포함
int main() { 
    SmartTV htv;                                            // SmartTV 객체1개 생성
    htv.setSmartTV(50, false, "192.0.0.2");                 // htv의 멤버함수 호출 
    cout<<"size ="<<htv.getSize() <<endl;                   // 안내메세지 및 정수를 화면에 출력
    cout<<"videoIn="<<boolalpha<<htv.getVideoIn() <<endl;   // 안내메세지 및 정수를 화면에 출력
    cout<< "IP ="<<htv.getIpAddr() << endl;                 // 안내메세지 및 정수를 화면에 출력
}

 