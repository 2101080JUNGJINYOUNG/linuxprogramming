#include <iostream>
using namespace std;

template <class T1>
class Container{
    T1 * data;
    int count;
public:
    Container(int a);
    void set(int a, T1 b);
    T1 get(int i);
};

template <class T1>
Container<T1>::Container(int a){count = a; data = new T1[count];}

template <class T1>
void Container<T1>::set(int a, T1 b){data[a]= b;}

template <class T1>
T1 Container<T1>::get(int i){
    return data[i];
}


int main() {
    Container<char> c(26);
    for (int i = 0; i < 26; i++)
        c.set(i, 'a' + i);
    for (int i = 25; i >= 0; i--)
        cout << c.get(i);
    cout << endl;
}