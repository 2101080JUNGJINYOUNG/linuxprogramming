#ifndef _COMPLEX_HPP_
#define _COMPLEX_HPP_

#include <iostream>
using namespace std;

class Complex{
    int real,img;
public:
    Complex(int r =0, int i=0){
        this->real = r;
        this->img = i;
    }

    void show();
    Complex operator *(Complex a);

};


#endif