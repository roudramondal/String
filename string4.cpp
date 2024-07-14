#include <iostream>
#include <string>
using namespace std;
int main ()
{
    // string name;
    // cout << "Enter your name= ";
    // getline (cin,name) ;
    // cout << "Your name is= "<<name ;
    // return 0;
    string input;
    cout << "Enter a string with spaces: ";
    cin >> input;
    cin.ignore(numeric_limits<streamsize>::max(), "\n");
    getline(cin, input);
    cout << "You entered: " << input << endl;
    return 0;
}