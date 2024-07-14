#include <iostream>
using namespace std;
int main ()
{
    string str="gfg";
    cout << str.length()<<"\n";
    str=str+"xyz";
    cout << str<<"\n";
    cout << str.substr(1,3)<<"\n";//index 0,1,2,3,4,5
    cout << str.find("fg");//useful funcation
    return 0;
}