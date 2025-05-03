#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int n = nums.size();

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != i)
        {
            return i;
        }
    }
    return n;
}

int missingNumber(vector<int> &nums)
{
    int n = nums.size();

    unordered_set<int> seen;

    for (int i = 0; i < n; i++)
    {
        seen.insert(nums[i]);
    }
    for (int i = 0; i <= n; i++)
    {
        if (seen.find(i) == seen.end())
        {
            return i;
        }
    }
    return n;
}

int main()
{
    vector<int> vec = {3, 0, 1, 2};

    cout << "Missing Number: " << missingNumber(vec) << endl;

    return 0;
}