#include "TV.hpp"                                   // 헤더파일 포함

TV::TV(int size){                                   // 타켓 생성자 정의
    this->size = size;                              // this->size에 size를 넣어준다
    cout << "TV생성"<< endl;                        // 안내메세지 출력
}
void TV::settv(int size){this->size = size;}       // 멤버함수 정의 및 this->size에 size를 넣어준다.
int TV::getSize(){return size;}                    // 멤버함수 정의 및 size를 반환해준다.

WideTV::WideTV(int size, bool videoIn):TV(size){   // 타켓 생성자 정의 및 TV(size)로 호출할 생성자를 지정해준다.
    this->videoIn = videoIn;                       // this->videoIn에 videoIn를 넣어준다.
    cout<< "WideTV 생성"<<endl;                    // 안내메세지 출력
}
void WideTV::setwide(bool videoIn){this->videoIn = videoIn;}  // 멤버함수 정의 및 this->videoIn에 videoIn를 넣어준다.
bool WideTV::getVideoIn(){return videoIn;}                    // 멤버함수 정의 및 videoIn을 반환해준다

SmartTV::SmartTV(int size, bool videoIn,string ipAddr) : WideTV(size, videoIn) {   // 타켓생성자 정의 및 WideTV(size, videoIn)로 호출할 생성자를 지정해준다.
    this->ipAddr = ipAddr;                                                         // this->ipAddr에 ipAddr를 넣어준다.
    cout << "Smart 생성" << endl;                                                  // 안내메세지 출력
}
void SmartTV::setSmartTV(int size, bool videoIn,string ipAddr){                    // 멤버함수 정의
    settv(size);                                                                   // 멤버함수 호출
    setwide(videoIn);                                                              // 멤버함수 호출
    this->ipAddr = ipAddr;                                                         // this->ipAddr에 ipAddr를 넣어준다
}
string SmartTV::getIpAddr() { return ipAddr; }                                     // 멤버함수 정의 및 ipAdder을 넣어준다.