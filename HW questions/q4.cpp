// WAP to convert a Decimal Number To binary
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num = 20;
    int bin[32];
    int i=0;
    while (num>0)
    {
        int rem = num%2;
        num = num/2;
        bin[i]=rem;
        i++;
    }

    for (int j = i-1; j >= 0; j--)
    {
        cout<<bin[j];
    }
    
    
    return 0;
}
