#include <iostream>
using namespace std;
int add(int x=0,int y=0){ // x and y are formal parameters
    return x+y;
}
int main()
{
    int a=90;
    int b=8;
    cout<<add(a,b); // a and b are actual parameters
return 0;
}