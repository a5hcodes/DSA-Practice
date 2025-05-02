#include <iostream>
#include <vector>
#include <cstdlib>
#include <unordered_set>
using namespace std;

/*
219. Contains Duplicate II

Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.
Example 1:

Input: nums = [1,2,3,1], k = 3
Output: true
Example 2:

Input: nums = [1,0,1,1], k = 1
Output: true
Example 3:

Input: nums = [1,2,3,1,2,3], k = 2
Output: false
*/

// Brute Force Approach
// Time Complexity : O(n2)
// bool containsDuplicate2(vector<int> &nums, int k)
// {
//     int n = nums.size();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (nums[i] == nums[j] && abs(i - j) <= k)
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// Optimal Approach Hahsmap
// Time Complexity : O(n)

bool containsDuplicate2(vector<int> &nums, int k)
{
    int n = nums.size();
    unordered_set<int> window; // empty hashmap 

    for (int i = 0; i < n; i++)
    {
        if(window.find(nums[i]) != window.end()) return true; // if nums[i] != not found return true

        window.insert(nums[i]); // if not found insert current value to the hashmap 

        if (window.size() > k) // if window size is greater than k 
        {
            window.erase(nums[i-k]); // erase i-k i = current value and k = target window size
        }
        
    }
    return false; // if no duplicates found.
}

int main()
{
    vector<int> vec = {1, 2, 3, 1};
    int k = 3;

    bool res = containsDuplicate2(vec, k);

    if (res)
    {
        cout << "Contains Duplicate with index less than or equal to k" << endl;
    }
    else
    {
        cout << "No Index or Duplicates value matched." << endl;
    }
}