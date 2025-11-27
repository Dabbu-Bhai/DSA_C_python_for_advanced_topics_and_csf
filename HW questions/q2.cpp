#include <iostream>
using namespace std;
// WAP Reverse a String;
int main(int argc, char const *argv[])
{
    string a = "cookie";
    int len = a.size();
    string b[len];
    int j=0;
    for (int i = len; i >= 0; i--)
    {
        b[j] = a[i];
        j++;
    }
    for (int i = 0; i <= len; i++)
    {
        cout<<b[i];
    }
    
    return 0;
}
