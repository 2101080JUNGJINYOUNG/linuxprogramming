#include <iostream>
#include <string>
using namespace std;

template <class T>
T getmax(T x[], int n) {
	T max;
	max = x[0];
	for (int i = 1; i < n; i++) {
		if (max < x[i]) max = x[i];
	}
	return max;
}


int main() {
	int a[5] = { -5, 10, 30, 20, 6 };
	double b[4] = { 3.14, 1.5, -6.0, 0.5 };
	char c[3] = { 'a', 'x', 'p' };
	cout << "정수배열의최대값은" << getmax<int>(a, 5) << endl;
	cout << "실수배열의최대값은" << getmax<double>(b, 4) << endl;
	cout << "문자배열의최대값은" << getmax<char>(c, 3) << endl;
}

