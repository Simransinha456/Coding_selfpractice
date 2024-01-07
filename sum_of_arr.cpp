#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the number of array: " ;
    cin >> n;

    int arr[n];
    cout << "Enter the array" << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Sum is: " << sum(arr, n) << endl;
    
    return 0;
}