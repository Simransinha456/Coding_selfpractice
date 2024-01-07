// Love babbar--

#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int value){
        this->data = value;
        this->next = NULL;
    }
};

void insertAtTail(Node* &tail, int val){
    Node* temp = new Node(val);
        tail->next = temp;
        tail = temp;
    }

void insertAtHead(Node* &head, int val){
    Node* temp = new Node(val); //created new node
    temp->next = head;
    head = temp;
}

void insertAtPosition(Node* & head, int position, int val){
    // to insert value at first position this condition required
    if(position == 1){
        insertAtHead(head, val);
        return;
    }

    //traverse ---
    Node* temp = head;
    int count=1;
    while(count < position-1){
        temp = temp->next; // temp ko aage badhate raho
        count++;
    }

    // INSERTING FOR LAST POSITION --
    // if(temp->next==NULL){
    //     insertAtTail(tail, val);
    //     return;
    // }

    // created node for value
    Node* nodeToInsert = new Node(val);
    nodeToInsert->next = temp->next; // comparing
    temp->next = nodeToInsert;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout<<"NULL"<< endl;
}

int main() {
    Node* node1 = new Node(10); // created new node
    cout << node1->data << endl;

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtHead(head,12);
    print(head);
    insertAtHead(head,15);
    print(head);
    insertAtTail(tail, 16);
    print(head);

    insertAtPosition(head, 1, 14);
    print(head);
    insertAtPosition(head, 3, 18);
    print(head);
    insertAtTail(tail, 19);
    print(head);

    cout<<"head "<< head->data << endl;
    cout<<"tail "<< tail->data << endl;
    return 0;
}