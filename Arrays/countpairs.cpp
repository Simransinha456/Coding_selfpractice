// Count pairs with the given sum --- O(n^2)

// #include <bits/stdc++.h>
// using namespace std;

// int countPairs(int arr[], int size, int k){
//     int count = 0;
//     for(int i=0; i<size; i++){
//         for(int j=i+1; j<size; j++){
//             if(arr[i]+arr[j] == k){
//                 count++;
//             }
//         }
//     }
//     return count;
// }

// int main() {
//     int arr[4] = {1, 5, 7, -1};
//     int k=6;
//     cout << "Pairs: " << countPairs(arr, 4, 6);

//     return 0;
// }

// Count pairs with the given sum ---  by using good approach (map)--O(n) but unordered_map has o(1)
#include <bits/stdc++.h>
using namespace std;
int countPairs(int arr[], int size, int k)
{
    unordered_map<int, int> m;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        int b = k - arr[i];
        if (m[b])
        {
            count = count + m[b];
        }
        m[arr[i]]++;
    }
    return count;
}

int main()
{
    int arr1[5] = {1, 5, 7, -1, 5};
    int arr2[4] = {1, 5, 7, -1};
    int k = 6;
    cout << "How many Pairs: " << countPairs(arr1, 5, k) << endl;
    cout << "How many Pairs: " << countPairs(arr2, 4, k);

    return 0;
}
