// WAP to reverse the number; 
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num = 123;
    int temp = num;
    int rev = 0;
    int rem = 0;
    //takeout last digits and add them to new number 
    while (temp !=0)
    {
        rem = temp%10;
        rev = rev*10 + rem;
        temp = temp/10;
    }
    cout<<rev;
    
    return 0;
}
