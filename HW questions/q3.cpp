// WAP to check a Char is Alphabet, Number, Special char; 
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char a = ')';
    if ((a >= 'a'&& a<='z') || (a>='A'&&a<='Z'))
    {
        cout<<"This is an alphabet";
    }
    else if (a>='0' && a<='9')
    {
        cout<<"This is a number";
    }
    else{
        cout<<"This is a special character";
    }
    
    
    return 0;
}
