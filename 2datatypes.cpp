/////////////////// datatypes //////////////////////
/*
////////////primary//////////////
char - char,unsigned char,wchar_t
int- short int,unsigned short int,int,unsigned int,long int,unsigned long int,long long int,unsigned long long int
float , double,long double
string
bool
void
//////////derived datatypes//////////
function
array
pointer
reference
/////////userdefind datatypes////////
structure
union
enum
typedof
class
*/
#include<iostream>
using namespace std;
int main(){
    cout << "char size:" << sizeof(char);
    cout << "\nwchar_t size:" << sizeof(wchar_t);
    cout << "\nshor int size:" << sizeof(short int);
    cout << "\nint size:" << sizeof(int);
    cout << "\nlong int size:" << sizeof(long int);
    cout << "\nlong long int size:" << sizeof(long long int);
    cout << "\nfloat size:" << sizeof(float);
    cout << "\ndouble size:" << sizeof(double);
    cout << "\nlong double size" << sizeof(long double);
    cout << "\nstring size:" << sizeof(string);
    cout << "\nbool size:" << sizeof(bool);
    return EXIT_SUCCESS;
}


/*
implecit typeconversion: (int)/(int)=float
explecit typeconversion: (int)variable
*/