#include <iostream>
using namespace std;

// PATTERNS PRACTICE 

int main(int argc, char const *argv[])
{
    //PRINTS :
    // ABCD
    // ABCD
    // ABCD
    // ABCD

    // int n=4;
    // for (int i = 1; i <= n; i++)//outer start
    // {
    //     char ch='A';
    //     for (int j = 0; j < n; j++)//inner loop starts
    //     {
    //         cout<<ch;
    //         ch++;
    //     }
    //     cout<<endl;
    // }

    // PRINTS:
    // 123
    // 456
    // 789

    // int n=3;
    // int k = 1;
    // for (int i = 1; i <= n; i++)//outer start
    // {
    //     for (int j = 1; j <= n; j++)//inner loop starts
    //     {
    //         cout<<k;
    //         k++;
    //     }
    //     cout<<endl;
    // }

    // PRINTS :
    // *
    // **
    // ***
    // ****

    // int n=4;
    // for (int i = 1; i <= n; i++)//outer start
    // {
    //     for (int j = 1; j <= i; j++)//inner loop starts
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // PRINTS:
    // 1
    // 22
    // 333
    // 4444

    // int n=4;
    // for (int i = 1; i <= n; i++)//outer start
    // {
    //     for (int j = 1; j <= i; j++)//inner loop starts
    //     {
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    // PRINTS:
    // A 
    // BB 
    // CCC 
    // DDDD

    // int n=4;
    // char ch='A';
    // for (int i = 1; i <= n; i++)//outer start
    // {
    //     for (int j = 1; j <= i; j++)//inner loop starts
    //     {
    //         cout<<ch;
    //     }
    //     ch++;
    //     cout<<endl;
    // }

    // PRINTS:
    // 1
    // 12
    // 123
    // 1234

    // int n=4;
    // for (int i = 1; i <= n; i++)//outer start
    // {
    //     for (int j = 1; j <= i; j++)//inner loop starts
    //     {
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

// PRINTS :
// 1
// 21
// 321
// 4321
    // int n=4;
    // for (int i = 1; i <= n; i++)//outer start
    // {
    //     for (int j = i; j >= 1; j--)//inner loop starts
    //     {
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

// PRINTS:
//FLOYD'S TRIANGLE
// 1
// 23
// 456
// 78910
    // int n=4;
    // int count=1;
    // for (int i = 1; i <= n; i++)//outer start
    // {
    //     for (int j = 1; j <= i; j++)//inner loop starts
    //     {
    //         cout<<count<<",";
    //         count++;
    //     }
    //     cout<<endl;
    // }

// PRINTS:
// INVERTED TRIANGLE 
// 1111
//  222
//    33
//      4
    // int n=4;
    // for (int i = 0; i < n; i++)//outer start
    // {
    //     for (int j = 0; j < i; j++)//inner loop to print spaces
    //     {
    //         cout<<" ";
    //     }
    //     for (int k = 0; k < n-i; k++)//2nd inner loop to print numbers
    //     {
    //         cout<<i+1;
    //     }
    //     cout<<endl;
    // }

// PRINTS:
//             1
//           121
//          12321
//         1234321
    // int n=4;
    // for (int i = 0; i < n; i++)//outer start
    // {
    //     for (int j = 0; j < n-i-1; j++)//inner loop to print spaces
    //     {
    //         cout<<" ";
    //     }
    //     for (int k = 0; k < i+1; k++)//2nd inner loop to print first half of numbers
    //     {
    //         cout<<k+1;
    //     }
    //     for (int g = i; g > 0; g--)//3rd loop to print 2nd half of numebrs
    //     {
    //         cout<<g;
    //     }
        
    //     cout<<endl;
    // }

// PRINTS:
//         *          
//       *   *  
//     *       *  
//   *           *  
// *               *  
//   *           * 
//     *       *
//       *   *
//         *    
    // int n=5;
    // for (int i = 0; i < n; i++)//upper part of pattern
    // {
    //     for (int j = 0; j < n-i-1; j++)//before spaces
    //     {
    //         cout<<" ";
    //     }
        
    //     cout<<"*";//start prints
    //     if (i != 0)
    //     {
    //         for (int k = 0; k < 2*i-1; k++)//spaces between stars
    //         {
    //             cout<<" ";
    //         }
    //         cout<<"*";//star prints
    //     }
    //     cout<<endl;
    // }

    // // bottom part 
    // for (int i = 0; i < n-1; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout<<" ";
    //     }
    //     cout<<"*";
    //     if (i!=n-2)
    //     {
    //         //spaces
    //         for (int k = 0; k < 2*(n-i)-5; k++)
    //         {
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    
// BUTTERFLY PATTERN:
    int n=4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
        cout<<"*";    
        }
        if (i != n)
        {
            for (int k = 0; k < 2*(n-i)-2; k++)
            {
                cout<<" ";
            }
        }
        for (int g = 0; g < i+1; g++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
        cout<<"*";    
        }
        if (i != n)
        {
            for (int k = 0; k < 2*(n-i); k++)
            {
                cout<<" ";
            }
        }
        for (int g = 0; g < i; g++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    return 0;
}
