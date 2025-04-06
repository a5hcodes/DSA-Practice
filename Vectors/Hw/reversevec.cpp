#include <iostream>
#include <vector>
using namespace std;

void reverseVec (vector<int>& vec, int size){
    int start = 0;
    int end = size-1;

    while(start < end){
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}

int main() {
    vector <int> num = {4,2,7,8,1,2,5};
    int size = 7;
    
    reverseVec(num, size);
    for(int i=0; i<size; i++){
        cout << num[i] << " ";
    }
    cout << endl;
}