#include <iostream>
#include <vector>
using namespace std;

//Find two numbers in a vector that add up to a target sum, and return them as a pair.
//Brute force approach uses for loop with time complexity O(n2)

vector<int> pairSum(vector<int> nums, int target)
{

    vector<int> ans;

    for (int i = 0; i < nums.size(); i++) //(i)
    {
        for (int j = i+1; j < nums.size(); j++) //(i,j)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                return ans;
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> vec = {2, 7, 11, 15};
    int target = 9; // the pairs sum sould be equal to 9

    vector<int> ans = pairSum(vec, target);
    cout << "Pair with sum " << target << ": ";

    for (int val : ans)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}