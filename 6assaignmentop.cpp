/////////////////////////// assaignment operator ////////////////////
//=,+=,-+,*=,/=,%=,&=,|=,^=,<<=,>>=
#include<iostream>
using namespace std;
int main(){
    int a;
    a = 5;
    cout << a << endl;  //5
    a += 1; //a=a+1
    cout << a << endl; //6
    a -= 1; //a=a-1;
    cout << a << endl;  //5
    a *= 2; //a=a*2
    cout << a << endl;  //10
    a /= 2; //a=a/2
    cout << a << endl;  //5
    a %= 2; //a=a%2
    cout << a << endl; //1
//////////////////////////////// bitwise operator /////////////////////////
    a &= 1;  //a=0001 & 0001 =00001
    cout << a << endl; //1
    a |= 1; //a=0001|0001=0001
    cout << a << endl; //1
    a ^= 1; //a=0001 ^ 0001=0000
    cout << a << endl; //0
    a = 3; //3
    a <<= 1; //a=0011<<1=0110
    cout << a << endl;//6
    a >>= 1;  //a=0110>>1=0011
    cout << a << endl;//3
    return 0;
}