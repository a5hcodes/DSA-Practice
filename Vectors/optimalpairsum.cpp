#include <iostream>
#include <vector>
using namespace std;

// Find two numbers in a vector that add up to a target sum, and return them as a pair.
// Optimal Two pointer approach uses for loop with time complexity O(n)

vector<int> pairSum(vector<int> vec, int target) // returns type vector
{
    vector<int> ans; // declared to store array values

    int n = vec.size();   // size of vector
    int i = 0, j = n - 1; // i starts at beginning, j at end

    while (i < j) // this is kept i<j bec it should not surpass each other then the answer will remain the same.
    {
        int pairSum = vec[i] + vec[j]; // as it loops through and adds up it is stored in pairsum variable.

        // Dry run (with vec = {2, 7, 11, 15} and target = 26):
        // i = 0, j = 3 → vec[i] = 2, vec[j] = 15 → sum = 17 → 17 < 26 → i++
        // i = 1, j = 3 → vec[i] = 7, vec[j] = 15 → sum = 22 → 22 < 26 → i++
        // i = 2, j = 3 → vec[i] = 11, vec[j] = 15 → sum = 26 → match found!

        if (pairSum > target) // if target is 9 and the last sum is 17 17>9
        {
            j--; // j moves to the left side of the array to 11. there is checks if 13 > 9 again j-- goes to 7
        }
        else if (pairSum < target)
        {
            i++;
        }
        else
        {
            ans.push_back(vec[i]); // if 9 = 9 then the vectors push first value i
            ans.push_back(vec[j]); // and sec value j to the ans vector array.
            return ans;
        }
    }
    return ans; // if no match is found
}

int main()
{
    vector<int> vec = {2, 7, 11, 15};
    int target = 26; // the pairs sum sould be equal to 9

    vector<int> ans = pairSum(vec, target);
    cout << "Pair with sum " << target << ": ";

    for (int val : ans)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}