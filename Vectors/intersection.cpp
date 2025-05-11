#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

/*
349. Intersection of Two Arrays

Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.



Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted.


Constraints:

1 <= nums1.length, nums2.length <= 1000
0 <= nums1[i], nums2[i] <= 1000
*/

// Brute Force Approach
//  Time Complexity : O(n1*n2)

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    int n1 = nums1.size();
    int n2 = nums2.size();

    vector<int> res;
    unordered_set<int> added;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (nums1[i] == nums2[j] && added.find(nums1[i]) == added.end())
            {
                res.push_back(nums1[i]);
                added.insert(nums1[i]);
                break;
            }
        }
    }
    return res;
}

//Optimal Approach
//Time Complexity: O(n)


vector<int> intersection(vector<int> nums1, vector<int> nums2)
{
    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> result;

    for (int num : nums2)
    {
        if (set1.find(num) != set1.end())
        {
            result.insert(num);
        }
    }
    return vector<int>(result.begin(), result.end());
}

int main()
{
    vector<int> vec1 = {1, 2, 2, 1};
    vector<int> vec2 = {2, 2};

    vector<int> r = intersection(vec1, vec2);

    for (int num : r)
    {
        cout << "Unqiue intersected elements from array are: " << num << endl;
    }
}