/////////////////// assaignment operator ////////////////////
//+,-,*,/,%,++,--
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout << "enter 2 numbers:\t";
    cin >> a >> b;
    cout << a << "+" << b << "=" << a + b << endl;
    cout << a << "-" << b << "=" << a - b << endl;
    cout << a << "*" << b << "=" << a * b << endl;
    cout << a << "/" << b << "=" <<(float)a / b << endl;
    cout << a << "%" << b << "=" << a % b << endl;
    cout << "a=" << a << endl;
    cout << "++a=" <<++a << endl;//pre increment
    cout << "--a=" << --a << endl;//pre decrement
    cout << "a++=" << a++ << endl;//post increment
    cout << "a=" << a << endl;
    cout<<"a--="<<a--<<endl;//post decrement
    cout << "a=" << a;

    return 0;
}