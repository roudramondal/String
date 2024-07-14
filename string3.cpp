#include <iostream>
using namespace std;
int main ()
{
    // string str="geeksforgeeks";
    // int res= str.find ("for");
    // if (res==str.npos)
    // {
    //     cout << "Not present"<<"\n";
    // }
    // else 
    // cout << "Find occurence"<<"at index"<<res;

    string s1="abc";
    string s2="abc";
    if (s1==s2)
    {
        cout << "same";
    }
    else if (s1<s2)
    {
        cout <<"smaller";
    } 
    else 
    cout << "Grater";
    return 0;
}