// Find missing number with bruth force--- 

// #include <bits/stdc++.h>
// using namespace std;

// int missingNumber(vector<int>& array, int n) {
//     for (int i = 1; i <= n; i++) {
//         bool found = false;

//         for (int j = 0; j < n - 1; j++) {
//             if (array[j] == i) { 
//                 found = true;
//                 break;
//             }
//         }
//         if (!found) {
//             return i;
//         }
//     }
//     return n;
// }

// int main() {
//     int N = 5;
//     vector<int> A = {1, 2, 3, 5};
//     int result = missingNumber(A, N);

//     cout << "Missing number: " << result << endl;
//     return 0;
// }



// by sum formula approach ---------
#include <iostream>
#include <vector>

using namespace std;

int missingNumber(vector<int>& array, int n) {
    int total = (n * (n + 1)) / 2;

    int sum = 0;
    for (int i=0; i<n-1; i++) {
       sum += array[i];
    }
     return total - sum;  
}

int main() {
    int N = 5;
    vector<int> A = {1, 2, 3, 5};

    int result = missingNumber(A, N);
    cout << "Missing number: " << result << endl;
    return 0;
}
