#include <iostream>
using namespace std;

// Write a code for finding the last occurences of an element x in a given array.

void occurence(int arr[], int x, int size){
    for(int i=0; i < size; i++){
        if(arr[i] == x){
            cout <<" found at index: "<< i << endl;
        }
    }
}

int main(){
     int arr[] = {4,2,7,8,1,2,5};
     int size = 7;
     int x = 4;

     occurence(arr, x, size);

}