#include <iostream>  
using namespace std;

void printHello(){
    cout << "hello\n";
}

//min 
int min (int a , int b){
if (a < b ){
    return a; 
} else {
    return b;
}
}

int sumN (int n ){
    int sum = 0;

    for(int i = i; i <= n; i++)
    {
        sum += i;
    }
    return sum;

}

void printPrime (int n){
    for (int i = 2; i <=n; i++){
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime){
            cout << i << " ";
        }
    }
}

int fact(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
     fact *= i;
    } 
   return fact;
    
}
int nCr (int n, int r){
    return fact(n)/ (fact(r) * fact(n-r));

}
int sumOfDigits(int num){
    int digitSum = 0;

    while(num > 0){
           int lastDigit = num % 10; // remainder ismei store hojata hai 
        num = num/10; // last waale number ko hata deta hai 
        digitSum += lastDigit;
    }
    return digitSum;

}

int sum (int a, int b){
    a = a+10;
    b = b+10;
    int sum = a+b;
    return sum;
}

void changex(int x){
    x = 2*x;
    cout << "x: " << x << endl;
}

int main (){
    int N;
    cout << "Enter N: ";
    cin >> N;
    printPrime(N);
    return 0;
    //   cout << nCr(7, 6) <<endl;
    // cout << "sum: "<< sumOfDigits(3456) << endl;
    // int x = 5;
    // changex(x);
    // cout << "x: " << x << endl;
//   cout <<  sumN(5) <<endl;
//   cout << fact(7) <<endl;
// int a = 5, b=4;
// cout <<  sum(a, b) <<endl;
// cout << a <<endl;
// cout << b <<endl;

    return 0;
}