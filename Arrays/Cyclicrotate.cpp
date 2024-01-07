#include<bits/stdc++.h>
using namespace std;

int printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i];
    }
    return 1;
}
int shiftByOne(int arr[], int n){
    int temp = arr[n-1];
    for(int i=n-1; i>0; i--){
        arr[i]= arr[i-1];
    }
    arr[0] = temp;
    cout<< endl;
    return 1;
}

int main(){
    int arr[5]= {1, 2, 3, 4, 5};
    
    printArray(arr, 5);
    shiftByOne(arr, 5);
    printArray(arr, 5);
    // shiftByOne(arr, 5);
    // printArray(arr, 5);

   return 0;
}








#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this-> next = NULL;
    }
};
    int main(){
        Node* node1 = new Node(12);
        cout << node1-> data << endl;
        cout << node1-> next << endl;
        return 0;
    }


