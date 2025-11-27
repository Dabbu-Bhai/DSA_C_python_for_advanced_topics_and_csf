#include<iostream>
#include<vector>
using namespace std;

// pairsum - return pair in sorted array with target sum  
vector<int> pairsumbrute(vector<int> nums,int target){
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i+1; j < nums.size(); j++)
        {
            if(nums[i]+nums[j]==target){
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                return ans;
            }
        }
        
    }
    return ans;
}

vector<int> pairsumoptimal(vector<int> nums , int target){
    vector<int> ans;
    int i=0 , j=nums.size()-1;
    while (i<j)
    {
        if (nums[i]+nums[j] > target)
        {
            j--;
        }
        else if(nums[i]+nums[j] < target){
            i++;
        }
        else{
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            return ans;
        }
        
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {1,2,3,4,5,6,7};
    int target = 3;
    // nums = pairsumbrute(nums,target); O(n2) complexity
    // nums = pairsumoptimal(nums,target); //linear time complexity
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<",";
    }
    cout<<endl;
    return 0;
}

// for majority element : https://leetcode.com/problems/majority-element/description/