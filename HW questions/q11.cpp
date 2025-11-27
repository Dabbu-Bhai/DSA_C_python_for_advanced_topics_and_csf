// GCD 
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num1 = 22;
    int num2 = 10;
    if (num1==0 || num2==0)
    {
        cout<<"0";
    }
    else{
    while (num2!=0)
        {
            int temp=num2;
            num2=num1%num2;
            num1=temp;
        }
        cout<<num1;
    }
    return 0;
}
