// WAP to count the digits in a number; 
#include<iostream>
using namespace std ;
int main(int argc, char const *argv[])
{
    int num = 153;
    int digits=0;
    int temp = num;
    // get digits 
    while (temp!=0)
    {
        temp = temp/10;
        digits++;
    }
    cout<<digits;
    return 0;
}