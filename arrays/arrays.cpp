#include <iostream>
using namespace std;

// void changeArr(int arr, int size){
//     cout << "in function" << endl
//     for (int i=0; i<size; i++){
//         arr[i] = 2* arr[i];
//     }
// }

int main(){

    int arr[7] = {4,2,7,8,1,2,5};
    int target = 8;


    for (int i=0; i<7; i++){
        if(arr[i] == target ){
            cout << arr[i] << endl;
        }
    }


    // //call by reference 
    // int arr[] = {1,2,3};
    // changeArr(arr, 3);
    // cout << "in main" << endl

    // for (int i =0; i<3; i++){
    //     cout << arr[i] << " ";
    // }

    // int marks[5] = {99, 100, 54, 36, 88}; //first 5 elements of size 50 array
    // double prices[3] = {199.99, 29.99, 30.99}; double array of size 3
    // cout << marks[0]<< endl; //99
    // int size = 5;
    // cout <<  size  << endl; 
    // loops : 0 to size -1
    // for (int i=0; i<size; i++){
    //     cout << marks[i] << " " ;
    // }

    // int num[6] = {5, 15, 22, 1, -15, -24};
    // int size = 6;
    
    // int smallest = INT_MAX;
    // int largest = INT_MIN;
    // for (int i= 0; i<size; i++){
    //     if(num[i] > largest){
    //         largest = num[i];
    //     }
    // }
    // for (int i = 0; i < size; i++){
    //     if(nums[i] < smallest){
    //         smallest = nums[i];
    //     }
    // }
    //  cout << "Smallest number is: " << largest << endl;
    return -1;
}