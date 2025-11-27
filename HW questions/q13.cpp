#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num = 23;
    cout<<"Divisors are: 1,";
    for (int i = 2; i < num/2+1; i++)
    {
        if (num%i==0)
        {
            cout<<i<<",";
        }
        
    }
    cout<<num;
    
    return 0;
}
