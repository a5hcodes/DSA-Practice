#include <iostream>
#include <vector>
using namespace std;
/*
628. Maximum Product of Three Numbers
Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

Example 1:

Input: nums = [1,2,3]
Output: 6
Example 2:

Input: nums = [1,2,3,4]
Output: 24
Example 3:

Input: nums = [-1,-2,-3]
Output: -6

*/

//Brute force 
// Time Complexity : O(n3)
int maximumProduct(vector<int> &nums)
{
    int n = nums.size();
    int maxprod = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int z = j + 1; z < n; z++)
            {
                int prod = nums[i] * nums[j] * nums[z];
                maxprod = max(prod, maxprod);
            }
        }
    }
    return maxprod;
}

int main(){
     vector<int> vec = {1,2,3,4};
     cout << "Max Product: " << maximumProduct(vec) << endl;

}