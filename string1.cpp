#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    // char s1[]="gfg";
    // char s2[]={'c','p','p','\0'};
    // cout << strlen(s1)<<"\n";
    // cout << strlen (s2)<<"\n";
    // char s1[]="gfg";
    // char s2[]="abcd";
    // int res= strcmp(s1,s2);
    // if (res==0)
    // {
    //     cout << "same";

    // }
    // else if (res<0)
    // {
    //     cout << "smaller";
    // }
    // else 
    // cout << "Grater";
    char str[5];
    strcpy (str,"gfg");
    cout << str;   
    return 0;
}