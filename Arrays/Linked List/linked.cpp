//By apna college

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){ // constructor jisme ham value bhej rhe hai
        data=value;
        next=NULL;
    }
};

void insertAtHead(Node* &head, int value){
    Node* n = new Node(value);
    n->next=head;
    head=n;
}
// suppose i want to insert 3 in my element 1 and 2== 1->2->3
void insertAtTail(Node* &head, int value){ // i'm taking Node as a reference not by value because mujhe apne linked list ko modify karna hai

    Node* n = new Node(value); // new node created
    if(head==NULL){  // jab ek bhi Node mere linked list me hai hi nhi ---
        head=n;
        return;
    }
    //traverse ---
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

//Printing the linked list--
void display(Node* head){ // here i'm taking Node as a value because i'm not modifying my Node
Node* temp = head;
    while(temp!=NULL){
        cout << temp->data<< "->";
        temp=temp->next;
    }
    cout << "NUll" << endl;

}

//SEARCHING-------
bool search(Node* &head, int key){
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next; // must write
    }
    return false;
}

int main() {
    Node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);

    insertAtHead(head,5);
    display(head);

    cout << search(head,6) << endl;
    return 0;
}