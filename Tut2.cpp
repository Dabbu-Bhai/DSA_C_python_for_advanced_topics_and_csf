// Variables operators and type casting
#include<iostream>
using namespace std;

int main(){ 
    // cout << "Divyansh" << "\n" << "Upadhyay";
    // Variables = container to store data 
    int age = 25;
    float gpa = 8.5;
    bool ispass=true;
    char grade = 'A';
    cout<<"Age is: "<<age<<"\n";
    cout<<"Grade is: "<<grade<<"\n";
    cout<<"GPA is: "<<gpa<<"\n";
    cout<<"has student passed ?: "<<ispass<<endl;
    
    // type conversion to bigger datatypes (implicit conversion)
    int value = grade;
    cout<<"Ascii of grade is: "<<value<<"\n";

    // type casting bigger datatype->smaller datatype 
    double d = 100.99;
    int val = (int) d;
    cout<<"Type casting output is floor value: "<<val<<"\n";

    // taking input 
    int year = 2025;
    // cout<<"Enter the year: ";
    // cin>>year;
    cout<<"The Year is: "<<year<<"\n";

    // operators in c++
    int a = 5 , b=3;
    int sum = a+b;
    int dif = a-b;
    int prod = a*b;
    int div = a/b;
    int mod = a%b;
    cout<<"Sum is: "<<sum<<endl;
    cout<<"difference is: "<<dif<<endl;
    cout<<"prod is: "<<prod<<endl;
    cout<<"div is: "<<div<<endl;
    cout<<"mod is: "<<mod<<endl;
    
    return 0;
}