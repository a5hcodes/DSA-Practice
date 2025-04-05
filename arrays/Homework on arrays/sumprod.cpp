#include <iostream>
using namespace std;

int sum (int arr[], int size){
    int total = 0;
    for(int i=0; i<size; i++){
        total += arr[i];
    }
    return total;
}

int prod (int arr[], int size){;
    int total = 1;
    for(int i=0; i<size; i++){
       total *= arr[i];
    }
    return total;
}

int main () {
    int arr[] = {4,2,7,8,1,2,5};
    int size = 7;

    cout << sum(arr, size) << endl;
    cout << prod(arr, size) << endl;

    return 0;

}

