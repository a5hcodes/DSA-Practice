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

// Brute force
//  Time Complexity : O(n3)
// int maximumProduct(vector<int> &nums)
// {
//     int n = nums.size();
//     int maxprod = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             for (int z = j + 1; z < n; z++)
//             {
//                 int prod = nums[i] * nums[j] * nums[z];
//                 maxprod = max(prod, maxprod);
//             }
//         }
//     }
//     return maxprod;
// }

// // Sorting Slightly Optimal
// //  Time Complexity : O(n log n)

// int maximumProduct(vector<int> &nums)
// {
//     sort(nums.begin(), nums.end());
//     int n = nums.size();

//     int prod1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
//     int prod2 = nums[0] * nums[1] * nums[n - 1];

//     int maxprod = max(prod1, prod2);

//     return maxprod;
// }

// Most Optimal Sol
// Time Complexity : O(n)

int maximumProduct(vector<int> &nums)
{
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for (int num : nums)
    {
        if (num > max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = num;
        }
        else if (num > max2)
        {
            max3 = max2;
            max2 = num;
        }
        else if (num > max3)
        {
            max3 = num;
        }

        if (num < min1)
        {
            min2 = min1;
            min1 = num;
        }
        else if (num < min2)
        {
            min2 = num;
        }
    }
    int prod1 = max1 * max2 * max3;
    int prod2 = max1 * min1 * min2;

    int maxprod = max(prod1, prod2);
    return maxprod;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4};
    cout << "Max Product: " << maximumProduct(vec) << endl;
}