#include <iostream>
#include <vector>
using namespace std;

void reverseVec (vector<int>& vec, int size){
    int start = 0;
    int end = size-1;

    while(start < end){
        swap(vec[start], vec[end]); // swaps the start index value with the end index value
        start++; // traverse forwards
        end--; // traverses backwards
    }
}

int main() {
    vector <int> num = {4,2,7,8,1,2,5};
    int size = 7;
    
    reverseVec(num, size);
    for(int i=0; i<size; i++){
        cout << num[i] << " "; // prints the entire vector 
    }
    cout << endl;
}