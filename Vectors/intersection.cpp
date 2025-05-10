#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

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

int main()
{
    vector<int> vec1 = {1, 2, 2, 1};
    vector<int> vec2 = { 2, 2};

    vector<int> r = intersection(vec1, vec2);

    for(int num : r){
        cout<<"Unqiue intersected elements from array are: " << num <<endl;
    }
}