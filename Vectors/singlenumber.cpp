#include <iostream>
#include <vector>
using namespace std;

//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
//Leetcode Solution 136. Single Number Problem List

int singleNumber (vector<int>& nums){
    int ans = 0;

    for( int val : nums){
        ans = ans ^ val;
    }

    return ans;
}

int main(){
    vector<int> vec = {33,12,33,12,9};

    cout << singleNumber(vec) << endl;

    return 0;
}