#include <iostream>
#include <vector>
using namespace std;

// Moore's Voting Algorithm
// It finds the majority element in O(n) time and O(1) space without using maps or sorting.
// Majority = element appearing more than n/2 times
// Time complexity: O(n).
// Use when working with large arrays for find majority.

void mooresMajority(vector<int> vec)
{
    int count = 0, ans = 0; // count is vote balance, ans stores current candidate

    // Step 1: Find the most probable candidate
    for (int i = 0; i < vec.size(); i++)
    {
        if (count == 0)
        {
            ans = vec[i]; // Set current element as new candidate
        }

        if (ans == vec[i])
        {
            count++; // Same as candidate → give +1 vote
        }
        else
        {
            count--; // Different from candidate → -1 vote
        }

        // Dry run output (for input: {3, 2, 3, 3, 3}):
        // i=0 → count=0 → ans=3 → 3==3 → count=1
        // i=1 → 2!=3 → count=0
        // i=2 → count=0 → ans=3 → 3==3 → count=1
        // i=3 → 3==3 → count=2
        // i=4 → 3==3 → count=3
        //
        // Final ans = 3 → appears 4 times out of 5 → ✅ majority
    }

    // NOTE: In strict interviews, you'd verify ans again here (2nd pass),
    // but if you assume a majority element always exists, this is enough.
    cout << "Majority element is: " << ans << endl;

    // if you dont assume majority elements to not exist then
    // Step 2: Verify if candidate is actually majority
    int freq = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == ans)
        {
            freq++;
        }
    }

    if (freq > vec.size() / 2)
    {
        cout << "Majority element is: " << ans << endl;
    }
    else
    {
        cout << "No Majority Element Found" << endl;
    }
}

int main()
{
    vector<int> vec = {1, 2, 3, 4};
    mooresMajority(vec);

    return 0;
}
