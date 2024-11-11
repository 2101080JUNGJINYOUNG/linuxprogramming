#ifndef _TV_HPP_                                            // 헤더파일이 정의되어있지 않으면 참인 조건문
#define _TV_HPP_                                            // 헤더파일 정의

#include <string>                                           // string 포함
#include <iostream>                                         // iosream 포함
using namespace std;                                        // std 생략

class TV {                                                  // TV 클래스 생성
    int size;                                               // 정수를 저장할 멤버변수 1개 선언
public:
    TV(int size=0);                                         // 타켓생성자 선언
    void settv(int size);                                   // 멤버변수 선언
    int getSize();                                          // 멤버변수 선언
};

class WideTV : public TV {                                  // 클래스 선언 및 상속
    bool videoIn;                                           // 상태를 저장할 멤버 변수 1개 선언
public:
    WideTV(int size=0, bool videoIn=false);                 // 타켓생성자 선언
    void setwide(bool videoIn);                             // 멤버함수 선언
    bool getVideoIn();                                      // 멤버함수 선언
};

class SmartTV : public WideTV {                             // SmartTV 클래스 생성 및 WideTV 상속
    string ipAddr;                                          // 문자열을 저장할 변수 1개 선언
public:
    SmartTV(int size=0,bool videoIn=true,string ipAddr=" ");// 타켓생성자 선언
    void setSmartTV(int size, bool videoIn, string ipAddr); // 멤버함수 선언
    string getIpAddr();                                     // 멤버함수 선언
};
#endif