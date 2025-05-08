#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>
using namespace std;

/*
2006. Count Number of Pairs With Absolute Difference K

Given an integer array nums and an integer k, return the number of pairs (i, j) where i < j such that |nums[i] - nums[j]| == k.

The value of |x| is defined as:

x if x >= 0.
-x if x < 0.


Example 1:

Input: nums = [1,2,2,1], k = 1
Output: 4
Explanation: The pairs with an absolute difference of 1 are:
- [1,2,2,1]
- [1,2,2,1]
- [1,2,2,1]
- [1,2,2,1]
Example 2:

Input: nums = [1,3], k = 3
Output: 0
Explanation: There are no pairs with an absolute difference of 3.
Example 3:

Input: nums = [3,2,1,5,4], k = 2
Output: 3
Explanation: The pairs with an absolute difference of 2 are:
- [3,2,1,5,4]
- [3,2,1,5,4]
- [3,2,1,5,4]


Constraints:

1 <= nums.length <= 200
1 <= nums[i] <= 100
1 <= k <= 99
*/

// given : an array nums and an integer k
// to return : the count of the differences of k that are present in the array. i < j with |i-j|.

// Brute Force Approach
//  Time Complexity : O(n2)

// int countKDifference(vector<int> &nums, int k)
// {
//     int n = nums.size();
//     int count = 0;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             int diff = abs(nums[i] - nums[j]);
//             if (diff == k)
//             {
//                 count++;
//             }
//         }
//     }
//     return count;
// }

// Optimal Solution using Hashmaps
//  Time complexity : O(n)

int countKDifference(vector<int> &nums, int k)
{
    int n = nums.size();
    unordered_map<int, int> numCount; // to keep trach of the count of numbers that has diff of k
    int pairCount = 0; // stores total number of valid pairs 

    for (int i = 0; i < n; i++)
    {
        pairCount += numCount[nums[i] + k]; //Check how many times (num + k) has appeared before
        pairCount += numCount[nums[i] - k]; //Check how many times (num - k) has appeared before

        numCount[nums[i]]++; //Now update the count of this number for future comparisons

       /*
        Dry Run Example: nums = [1, 2, 2, 1], k = 1

        Step 1: num = 1
        - num + k = 2 → not in numCount
        - num - k = 0 → not in numCount
        → pairCount = 0
        → numCount = {1: 1}

        Step 2: num = 2
        - num + k = 3 → not in numCount
        - num - k = 1 → found 1 → pairCount += 1
        → pairCount = 1
        → numCount = {1: 1, 2: 1}

        Step 3: num = 2
        - num + k = 3 → not in numCount
        - num - k = 1 → found 1 → pairCount += 1
        → pairCount = 2
        → numCount = {1: 1, 2: 2}

        Step 4: num = 1
        - num + k = 2 → found 2 twice → pairCount += 2
        - num - k = 0 → not in numCount
        → pairCount = 4
        → numCount = {1: 2, 2: 2}
        */
    }

    return pairCount;
}

int main()
{
    vector<int> vec = {1, 2, 2, 1};
    int k = 1;

    cout << "Number of difference of k in array: " << countKDifference(vec, k) << endl;
}
