#include <bits/stdc++.h>
using namespace std;

int uniqueElement(int arr[], int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of array: " ;
    cin >> n;

    int arr[100];
    cout << "Enter the array ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int result = uniqueElement(arr, n);
    cout << "Print the answer: " << " "<< result;
    return 0;
}