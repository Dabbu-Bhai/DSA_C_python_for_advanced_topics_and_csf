#include <iostream>
#include <vector>
#include <climits>
using namespace std;
// subarrays are contiguous subsets of the array/vector 
int main(int argc, char const *argv[])
{

    vector<int> V = {1,2,3,4,5,6};
    // bruteforce 
    // for (int i = 0; i < V.size(); i++)
    // {
    //     for (int j = i; j < V.size(); j++)
    //     {
    //         for (int k = i; k <= j; k++)
    //         {
    //             cout<<V[k];
    //         }
    //         cout<<" ";
    //     }
    //     cout<<endl;
        
    // }

    // kadanes's algo 
    // if currentsum = -ve then reset to 0
    int currsum = 0;
    int maxsum=INT_MIN;
    // int maxSum = max(currsum,maxsum)
    for (int i = 0; i < V.size(); i++)
    {
        currsum +=V[i];
        maxsum=max(currsum,maxsum);
        if(currsum < 0){
            currsum=0;
        }
    }
    // https://leetcode.com/problems/maximum-subarray/description/
    
    return 0;
}
