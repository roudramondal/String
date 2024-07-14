#include <iostream>
using namespace std;
int main ()
{
    string s;
    cin>> s;
    int start=0;
    int end=s.length()-1;
    while (start<end)
    {
        if (s[start]!=s[end])
     {
        cout << "No";
        return 0;
    }
    else 
    {
    start++;
    end--;
    }
}
cout << "Yes";
return 0;

    }  

    
    