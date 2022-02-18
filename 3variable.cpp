///////////////////// variables////////////////////
/*
* variables are container strored datavalues named memory location.
* variable name cannot start number
* variable name contain letters,number and _
* name styles: Pascalcase,cammelCase,snake_case
*/
//datatype name=value;
#include<iostream>
using namespace std;
#define global1 "global";
string global2 = "global";
int main(){
    char op='+';
    int num1=5;
    float num2=5.5;
    string name="srinivasan";
    bool istrue=true;
    cout << num1 << op << num2 << "=" << num1 + num2 << endl;
    cout << "I am " << name << endl;
    cout << istrue << endl;
    cout << global1;
    cout << endl<<global2;

    return 0;
}
//local,global,#define,static,extern
/*
////////escape character ///////
\a-alert
\b-backspace
\t-tabspace
\n-newline
\v-verticalspace
\f-formfeed
\r-carriage return
\"-"
\\-\
\0-null
*/