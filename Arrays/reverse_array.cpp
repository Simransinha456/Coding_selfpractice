// Reverse an array-------------

// #include <bits/stdc++.h>
// using namespace std;

// int reverse(int arr[], int size){
//     int start = 0;
//     int end = size-1;

//     while(start<=end){
//     swap(arr[start], arr[end]);
//     start++;
//     end--;
// }
// }

// int main() {
//     int n;
//     cout << "Enter the number of elements ";
//     cin >> n;

//     int arr[100];
//     cout<< "Enter the number: ";
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     // isme initially koi ans maine nhi liya hai isliye mujhe array ke final result ko print karne ke liye for loop lena hoga
//     reverse(arr, n);
//     cout<< "Print the array ";
//     for(int i =0; i<n ; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int size){
    int start=0;
    int end=size-1;
    for(int i=0; i<size; i++){
        if(start < end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}

int main() {
   int arr[6] = { 1, 0, 2, 4, 8, -1};
    reverse(arr, 6);
    cout << "reverse of array is: ";
     for(int i=0; i<6; i++){
        cout << arr[i] << " ";
    }

    return 0;
}