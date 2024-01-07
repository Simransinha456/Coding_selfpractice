#include <bits/stdc++.h>
using namespace std;

void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main() {
    int even[6] = {3, 6, 7, 2, 8, 5};
    int odd[5] = {6, 7, 2, 8, 5};

    swapAlternate(even, 6);
    cout << "The even array is: ";
    for(int i=0; i<6; i++){
        cout << even[i] << " ";
    }
    cout << endl;

    swapAlternate(odd, 5);
    cout << "The odd array is: ";
    for(int i=0; i<5; i++){
        cout << odd[i] << " ";
    }
    return 0;
}