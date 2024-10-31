#include "Complex.hpp"

void Complex::show(){
    cout << real << "+"<<img<<"j"<<endl;
}


Complex Complex::operator *(Complex a){
    Complex b;
    b.real = this->real* a.real;
    b.img = this->img*a.img;
    return b;
}