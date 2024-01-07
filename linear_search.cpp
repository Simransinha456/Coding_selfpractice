// Find the key is present or not 

// #include <bits/stdc++.h>
// using namespace std;

// bool search(int arr[], int size, int key){
//     for(int i=0; i<size; i++){
//         if(arr[i] == key){
//             return true;
//         } 
//     }
//     return false;
// }

// int main() {
//     int arr[6] = {1, 2, -4, 6, 3, 5};

//     int key;
//     cout << "Enter the elements you want to search: ";
//     cin >> key;

//     bool found = search(arr, 6, key);
//     if(found){
//         cout << "Key is present";
//     } else {
//         cout << "Key is absent";
//     }
//     return 0;
// }







#include <bits/stdc++.h>
using namespace std;
bool search(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int key;
    cout << "Enter the elements you want to search: ";
    cin >> key;

    if(search(arr, 5, key)){
        cout << "Key is present" << endl;
    } else {
        cout << "Not present" << endl;
    }
  
    return 0;
}