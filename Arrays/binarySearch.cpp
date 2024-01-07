#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        // go to right part/ left part according to key
        if(key > arr[mid]) {
            start = mid+1;
        } else {
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}

int main() {
    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {1, 3, 5, 7, 9};

    cout << "Index of 8 is: " << binarySearch(even,6,8) << endl;
    cout << "Index of 9 is: " << binarySearch(odd,5,9) << endl;

    // mai koi random number find krungi to output -1 aayega because wo ush array me exist hi nhi karta
    cout << "Index of 15 is: " << binarySearch(odd,5,15);

    return 0;
}  




