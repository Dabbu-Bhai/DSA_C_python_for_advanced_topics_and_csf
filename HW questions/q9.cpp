// WAP to check weather a Number is palindrome or not; 
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num = 1221;
    int temp = num;
    int rev = 0;
    while (temp!=0)
    {
        int rem = temp%10;
        rev = rev*10 + rem;
        temp = temp/10;
    }
    cout<<(rev==num ? "Number is palindrome" : "Number is not palindrome");
    return 0;
}
