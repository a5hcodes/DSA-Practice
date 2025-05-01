#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
*/

// Brute Force Approach
// Time complexity is O(n2)
// Leetcode problem 1 TwoSum

vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int tarSum = nums[i] + nums[j];

            if (tarSum == target)
            {
                return {i, j};
            }
        }
    }

    return {}; // in case no solution is found (just to satisfy return for all code paths)
}

// Two Pointers Approach
// Time Complexity : O(n log n)
vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<pair<int, int>> numIndex;

    for (int i = 0; i < n; i++)
    {
        numIndex.push_back({nums[i], i});
    }

    sort(numIndex.begin(), numIndex.end());

    int i = 0, j = n - 1;

    while (i < j)
    {
        int tarSum = numIndex[i].first + numIndex[j].first;

        if (tarSum == target)
        {
            return {numIndex[i].second, numIndex[j].second};
        }
        else if (tarSum < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return {};
}

// Hashmaps Approach for most optimal solution
// Time Complexity : O(n)

vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    unordered_map<int, int> numMap; // this is empty intialilly

    for (int i = 0; i < n; i++)
    {
        int complement = target - nums[i]; // the difference gets stored

        if (numMap.find(complement) != numMap.end()) // checks if the complement is present in the numMap or not
        {
            return {numMap[complement], i}; // returns the complement and current position
        }

        numMap[nums[i]] = i; // if not found , the current position value gets stored in the hashmap.
        // store the key with its index. so thar in numMap.find it is found early.
    }
    return {};
}

int main()
{
    vector<int> vec = {2, 7, 11, 15};
    int target = 9;

    vector<int> res = twoSum(vec, target);

    cout << "Indices: ";
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}
