////////////////// conditional statement /////////////////////
//if(){}else if(){}else{} , ()?true:false; , switch(case){case value://code break; case value://code default://code}
#include<iostream>
using namespace std;
int main(){
    int a = 5,b;
    cout << "\nenter a number:\t";
        cin >> b;
//////////////////// ternary condition //////////////////
    cout << ( (a < b)?"enter small number":(a > b)?"enter big number":(a == b)?"correct number":"error");
    cout << endl;
//////////////////////if else statement /////////////////
    if (a > b)
    {
        cout << "enter big number\t";
    }else if(a==b){
        cout << "correct number\t";
    }else if(a<b){
        cout << "enter small number\t";
    }else{
        cout << "error";
    }
    cout << endl;
    /////////////////////////switch case//////////////////////
    switch (b)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        cout << "enter big number";
        break;
    case 5:
        cout << "correct number";
        break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
        cout << "enter small number";
        break;
    default:
        cout << "error"; 
        }
        return EXIT_SUCCESS;
}