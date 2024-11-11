#include "NamedCircle.hpp"                                         // 헤더파일 포함

Circle::Circle(int radius):radius(radius){}                        // 타켓생성자 정의 및 radius에 radius를 넣어준다
int Circle::getRadius(){ return radius;}                           // 멤버함수를 정의하고 radius를 반환한다
void Circle::setRadius(int radius){this->radius= radius;}          // 멤버함수를 정의하고 this->radius에 radius를 넣어준다.
double Circle::getArea(){return 3.14*radius*radius;}               // 멤버함수를 정의하고 3.14*radius*radius를 반환해준다


NamedCircle::NamedCircle(int r, string b):Circle(r),b(b){}         // 타켓생성자 정의 및 Circle(int radius)를 호출 생성자로 지정하고 b에다가 b를 넣어준다
void NamedCircle::show(){                                          // 멤버함수 정의
    cout <<"반지름이 "<< getRadius() << "인 " <<b <<endl;           // getRadius()함수를 호출하고 반환값과 안내메세지를 화면에 출력
}
void NamedCircle::setName(string b){this->b = b;}                   // 멤버함수 정의하고 this->b에 b를 넣어준다

string NamedCircle::getName(){return b;}                            // 멤버함수를 정의하고 b를 반환

