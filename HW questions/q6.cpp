// WAP to find a Number is Armstrong Number or not; 
// Armstrong Number is a number that is equal to the sum of its own digits each raised to the power of the total number of digits in the number.
//  For example, 153 is an Armstrong number because it has three digits, and 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
#include<iostream>
#include<math.h>
using namespace std ;
int main(int argc, char const *argv[])
{
    int num = 153;
    int digits=0;
    int rem=0;
    int sum=0;
    int temp = num;
    // get digits 
    while (temp!=0)
    {
        temp = temp/10;
        digits++;
    }
    temp = num;//reinitialize to use again 
    // get our armstrong number 
    while (temp!=0)
    {
        rem = temp%10;
        sum = sum + pow(rem,digits);
        temp = temp/10;
    }
    cout<<(sum==num ? "Number is an  armstrong number" : "Not an armstrong number");
    // cout<<sum;
    // cout<<digits;


    return 0;
}
