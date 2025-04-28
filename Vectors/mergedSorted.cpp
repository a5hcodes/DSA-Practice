#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    for (int i = 0; i < n; i++)
    {
        nums1[m + i] = nums2[i]; // in order to merge m + i meaning merge the elements to the end of the nums1 array. 
    }
    sort(nums1.begin(), nums1.end()); // sort the array
}

int main()
{
    vector<int> vec1 = {1, 2, 3, 0, 0, 0};
    vector<int> vec2 = {2, 5, 6};

    int m = 3; // Only first 3 elements are valid (1,2,3)
    int n = 3; // 3 elements in vec2 (2,5,6)

    merge(vec1, m, vec2, n);

    for (int num : vec1)
    {
        cout  << num << " ";
    }
    cout << endl;

    return 0;
}
