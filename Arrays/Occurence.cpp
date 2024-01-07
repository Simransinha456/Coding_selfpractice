// #include <bits/stdc++.h>
// using namespace std;
// int occurence(int arr[], int n, int x){
//     int ans = 0;
//     for(int i=0; i<n; i++){
//         if(x == arr[i]){
//             ans++;
//         }
//     }
//         return ans;
// }

// int main() {
//     int input;
//     cout << "Enter how many number you wants to take ";
//     cin >> input;

//     int arr[100];
//     cout << "Enter the number " << endl;
//     for(int i=0; i<input; i++){
//         cin >> arr[i];
//     }
//     int key;
//     cout << "Enter key ";
//     cin >> key;
    
//     int a = occurence(arr, input, key);
//     cout << "Result is: " << a;
    
//     return 0;
// }

// here it's time complexity is O(n) so this is good approach






#include <iostream>
#include <map>
using namespace std;

int countOccurrences(int arr[], int n, int x) {
    map<int, int> occurrencesMap;

    // Count occurrences using map
    for (int i = 0; i < n; i++) {
        occurrencesMap[arr[i]]++;
    }

    // Return the number of occurrences of x
    return occurrencesMap[x]; // x kya hai 2 jo kitni baar aaya
}

int main() {
    int arr[] = {1, 1, 2, 2, 2, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;

    int occurrences = countOccurrences(arr, n, x);
    cout << "Number of occurrences of " << x << " in the array: " << occurrences << endl;

    return 0;
}
