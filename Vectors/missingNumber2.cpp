#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findDisappearedNumbers(vector<int> &nums)
{
    int n = nums.size();
    unordered_set<int> seen;

    vector<int> result;

    for (int num : nums)
    {
        seen.insert(num);
    }

    for (int i = 1; i <= n; i++)
    {
        if (seen.find(i) == seen.end()) // if i equal to no tfound
        {
            result.push_back(i);
        }
    }
    return result;
}

int main()
{
    vector<int> vec = {4, 3, 2, 7, 8, 2, 3, 1};

    vector<int> res = findDisappearedNumbers(vec);

    cout << "[ ";
    for (int val : res)
    {
        cout << val << " ";
    }
    cout << "]";

    cout << endl;

    return 0;
}