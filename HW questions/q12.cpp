// Check Weather a given Number is Prime or not; 
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num = 19;
    bool p = 0;
    for (int i = 2; i < num/2; i++)
    {
        if (num%i == 0)
        {
           p=1;
        }        
    }
    cout<<(p==1 ? "Number is not prime" : "Number is prime");
    
    return 0;
}
