#include<iostream>
using namespace std;
void print_arr(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void change_arr(int arr[],int size){
        for (int i = 0; i < size; i++)
        {
            arr[i] = arr[i]*2;
        }
    }
int linearsearch(int arr[],int size,int target){
    for (int i = 0; i < size; i++)
    {
        if (target==arr[i])
        {
            return i;
        } 
    }
    return -1;
    
}
void reverse_arr(int arr[],int size){
    int j = size-1;
    for (int i = 0; i < j; i++)
    {
        swap(arr[i],arr[j]);
        j--;
    }
}

void unique_val(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        bool isdup = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[i]==arr[j])
            {
                isdup = true;
                break;
            }
            
        }
        if (!isdup)
        {
            cout<<arr[i]<<" ";
        }
        
        
    }
    cout<<endl;
}


int main(int argc, char const *argv[])
{
    // int marks[100];//syntax
    // int marks[5]={100,20,39,99,88};//syntax
    // int sz = sizeof(marks) / sizeof(marks[0]);
    // int sz = 5;
    // int marks[sz];

    // for (int i = 0; i < sz; i++)//taking user inout
    // {
    //     cin>>marks[i];
    // }

    // for (int i = 0; i < sz; i++)
    // {
    //     cout<<marks[i]<<endl;
    // }

    // WAP to find Smallest number in array 
    // int arr[5] = {1,2,3,-4,5};
    // int size = 5;
    // int smallest = __INT_MAX__;
    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i]<smallest)
    //     {
    //         smallest = arr[i];
    //     }
    // }
    // cout<<"The smallest number is "<<smallest<<endl;
    // return 0;

    // WAP to find largest number in array 
    // int arr[5] = {-11,-12,-13,-4,-5};
    // int size = 5;
    // int largest = -(__INT_MAX__);
    // for (int i = 0; i < size; i++)
    // {
    //     largest = max(arr[i],largest);
    // }
    // cout<<"The largest number is "<<largest<<endl;

    // Pass by refrence 
    // int arr[]={1,2,3,4,5};
    // int sz = 5;
    // change_arr(arr,sz);
    // for (int i = 0; i < sz; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;   
    
    // Linear search
    // int arr[]={1,2,3,4,5};
    // int sz = 5;
    // int target = 2;
    // cout<<linearsearch(arr,sz,target)<<endl;    

    // Reverse array (two pointer approach)
    // int arr[]={1,2,3,4,5,6};
    // int sz = 6;
    // reverse_arr(arr,sz);
    // print_arr(arr,sz);
    // return 0;

    // WAP to print all unique values in array 
    int arr[8]={1,1,2,3,3,333,4,5};
    unique_val(arr,8);
}
