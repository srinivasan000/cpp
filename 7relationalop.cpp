////////////////////////// relational operator ////////////////////////
//==,!=,<,<=,>,>=
#include<iostream>
using namespace std;
int main() {
    int a = 5, b = 5;
    cout << (a == b) << endl; //1
    cout << (a < b) << endl;//0
    cout << (a <= b) << endl;//1
    cout << (a >= b) << endl;//1
    cout << (a < b) << endl;//0
    cout << (a != b) << endl;//0

    return 0;
}