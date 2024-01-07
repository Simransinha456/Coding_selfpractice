// #include <bits/stdc++.h>
// using namespace std;
// vector<int> findRooms(const vector<int>& coins, int N, int K){
//     int start=0, end=0, currentSum=0;
//     vector<int> result = {0, INT_MAX};

//     while(end<N){
//         currentSum += coins[end];

//         while(currentSum > K){
//             currentSum -= coins[start];
//             start++;
//         }
//         if(currentSum == K && (end-start < result[1] - result[0])){
//             result[0] = start;
//             result[1] = end;
//             end++;
//         }
//         if(result[1] == INT_MAX) {
//             cout << "No solution found" << endl;
//         }
//         return result;
//     }
// }

// int main() {
//     int N, K;
//     cout << "Enter the number of rroms (N): ";
//     cin >> N;
//     cout << "Enter the total number of gold coins to collect(K): ";


//     cin >> K;
//     vector<int> coins(N);
//     cout << "Enter the  number of gold coins in each room: ";
//     for (int i = 0; i < N; ++i) {
//         cin >> coins[i];
//     }

//     vector<int> result = findRooms(coins, N, K);
//     cout << "Enter room no: " << result[0]+1 << "and exit room " << result[1]+1 << endl;
    
    
//     return 0;
// }















#include <bits/stdc++.h>

using namespace std;

int countGreaterElements(const vector<int>& Arr) {
    int count = 0;
    int maxSoFar = INT_MIN;

    for (int i = 0; i < Arr.size(); ++i) {
        if (Arr[i] > maxSoFar) {
            maxSoFar = Arr[i];
            count++;
        }
    }

    return count;
}

int main() {
    int N;

    cout << "Enter the size of the array: ";
    cin >> N;

    vector<int> arr(N);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int result = countGreaterElements(arr);

    cout << "Count of elements greater than all of their prior elements: " << result << endl;

    return 0;
}
