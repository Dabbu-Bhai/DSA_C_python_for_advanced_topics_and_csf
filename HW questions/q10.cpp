// Find the LCM of two Numbers; 
#include<iostream>
using namespace std;
int gcd(int num1, int num2){
    while (num2!=0)
    {
        int temp=num2;
        num2=num1%num2;
        num1=temp;
    }
    return num1;
    
}
int main(int argc, char const *argv[])
{
    int num1 = 23;
    int num2 = 22;
    if (num1==0 || num2==0)
    {
        cout<<"0";
    }
    else{
        cout<<(num1/gcd(num1,num2)*num2);
    }
    

    return 0;
}

