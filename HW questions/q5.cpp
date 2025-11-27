// WAP to find a number is even or Odd; 
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<(num%2==0 ? "Number is Even" : "Number is Odd");
    return 0;
}
