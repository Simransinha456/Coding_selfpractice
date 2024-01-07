#include <bits/stdc++.h>
using namespace std;

int max(int arr[], int n){
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[], int n){
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int size;
    cout << "Enter the number of elements: " ;
    cin >> size;

    int arr[100];
    cout<< "Enter the numbers";
    for(int i=0; i< size; i++){
    cin >> arr[i];
    }
    
    cout << "Maximum number is: "<< max(arr, size) << endl;
    cout << "Minimum number is: "<< min(arr, size) << endl;
    
    return 0;
}


