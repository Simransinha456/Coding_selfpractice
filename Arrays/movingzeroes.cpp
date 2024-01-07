#include <iostream>
using namespace std;

void ZeroOnes(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        while (arr[start] == 0 && start < end) {
            start++;
        }

        while (arr[end] == 1 && start < end) {
            end--;
        }

        if (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}

int main() {
    int arr[8] = {0, 1, 0, 1, 1, 0, 1, 0};

    cout << "Original array: ";
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }

    ZeroOnes(arr, 8);

    cout << "\nArray after moving 0s and 1s:" ; 
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
