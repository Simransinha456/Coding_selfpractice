// #include <bits/stdc++.h>
// using namespace std;

// void selectionSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int min = i;

//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[min])
//             {
//                 min = j;
//             }
//             swap( arr[min],arr[i]);
//         }
//     }
// }

// int main()
// {
//     int arr[5] = {64, 25, 12, 22, 11};
//     selectionSort(arr, 5);
//     cout << "Print the sorted array: " << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }




// sorted array 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[8] = {2,1,3,4,0,-2,6,22};

    sort(arr, arr+8);
    cout << "sorted array:" << endl;
    for(int i=0; i<8; i++){
        cout << arr[i] << " ";
    }

    return 0;
}