#include <iostream>
#include <string>
//#include <cstring>
using namespace std;
int main ()
//int main (int argc,char const*argv[])
{
//     string s1="Hello world";
//    // string s2="World";
//     //string s3=s1+""+s2;
//     cout << s1;
// string s('c');
// cout << s;
//     return 0;
string str ("geeksforgeeks");
cout << str.substr(3).substr(5)<<"\n";
return 0;
}