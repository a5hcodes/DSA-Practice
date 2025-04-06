#include <iostream>
#include <vector>
using namespace std;

void linearSearch (vector<int>& vec, int target) {
    int index = 0;
    for (int val : vec){
        if(val == target){
            cout << index << endl;
        }
        index++;
    }
}

int main(){
    vector<int> nums = {4,2,7,8,1,2,5};
    int target = 8;

    linearSearch(nums, target);

    return 0;
}