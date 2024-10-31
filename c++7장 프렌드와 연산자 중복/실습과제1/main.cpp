 #include "Complex.hpp"

int main() {
    Complex x(2, 3), y(-5, 10), sum;
    sum = x + y;
    cout<< "두복소수의합은";
    sum.show();
    return 0;
 }