///////////////////////// loops //////////////////////
//while loop , do-while loop , for loop , goto label loop , function loop 
#include<iostream>
void loop(int, int);
using namespace std;
int main(){
    int a;
///////////////// while loop ///////////////////
    a = 1;
    while(a<=5){
        cout << a;
        a++;
    }
    cout << endl;
//////////////// do while loop //////////////////
    do{
        cout << a;
        a--;
    } while (a >= 1);
    cout << endl;
///////////////// for loop //////////////////////
    for (a = 1; a <= 5;a++){
        cout << a;
    }
    cout << endl;
//////////////////goto label ////////////////////
    a = 1;
loop:
    cout << a;
    if(++a<=5){
        goto loop;
    }
    cout << endl;
////////////////// recursive function //////////////
      loop(1,10);
}
    void loop(int a,int b){
        if(a==b){
            cout << a;
        }else if(a<b){
            cout << a;
            loop(++a, b);
        }else if(a>b){
            cout <<a;
            loop(--a, b);
        }
    }