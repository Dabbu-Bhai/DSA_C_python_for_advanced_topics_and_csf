#include <iostream>
#include <vector>
using namespace std;
// vectors = dynamic arrays 
int main(int argc, char const *argv[])
{
    // vector<int> vec; with zeor size
    vector<int> vec = {1,2,3,4,5};
    // vector<int> vec(3,0); 
    // 3 sized vector with 0 at each place

    // Traverse vector
    // for(int i : vec){
    //     cout<<i<<endl;
    // }
    
    // Size function 
    // cout<<vec.size()<<endl;

    // insert element in last of vector 
    // vec.push_back(6);
    // cout<<vec.size()<<endl;

    // delete element in last of vector 
    // vec.pop_back();
    // cout<<vec.size()<<endl;

    //prints front value of the vector
    // cout<<vec.front()<<endl;
    
    //prints front value of the vector
    // cout<<vec.back()<<endl;

    //prints value at the index i
    // cout<<vec.at(2)<<endl;

    // https://leetcode.com/problems/single-number/
}
