 #include "Power.hpp"


Power::Power(int k, int p):kick(k),punch(p){}

void Power::show(){
    cout << "kick="<<kick<<",punch="<<punch<<endl;
}

Power operator*(int a,Power& op){
    Power tmp;
    tmp.kick = a*op.kick;
    tmp.punch = a*op.punch;
    return tmp;
}