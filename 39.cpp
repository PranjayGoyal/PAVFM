#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val){
        data= val;
        next = NULL;
    }
};
// what is difference between Node* head and Node* &head is in * &head value of the head will changed.
void InsetAtTail(Node* &head, int val){   // here head is by reference not by value..
    Node* newNode = new Node(val);
    Node* curr = head;
    if(head == NULL){
        head = newNode;
        return;
    }
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = newNode;
}

void InsertATHead(Node* &head, int val){
    Node* n = new Node(val);
    n->next = head;
    head = n;
}



void deleteNode(Node* head,int val){

    if(head == NULL){ 
        return;
    }

    Node* curr = head;
    Node* prev = NULL;
    while(curr->data != val ){
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    delete(curr);    
}

void deleteAtHead(Node* &head){
    Node* curr = head;
    head = head->next;
    delete(curr);
} 

void ReverseList(Node* &head){
    Node* next;
    Node* curr = head;
    Node* prev = NULL;
    
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

Node* ReverseRecursiveList(Node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* newhead = ReverseRecursiveList(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

Node* ReverseK(Node* &head, int k){
    Node* curr = head;
    Node* prev = NULL;
    Node* next;
    int count=0;
    while(curr != NULL && count<k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr= next;
        count++;
    }
    if(next != NULL){
    head->next = ReverseK(next,k);
    }
    return prev; 
}

// isme &head likho ya na likho koi pharak nhi padta 
void printLinkedList(Node* head){  
    Node* s= head;
    while(s != NULL){
        cout<<s->data<<"->";
        s=s->next;
    }    
    cout<<"NULL"<<endl;
}

int main(){
    Node* head =NULL;
    InsetAtTail(head,12);
    InsetAtTail(head,13);
    InsetAtTail(head,14);
    InsetAtTail(head,15);
    InsetAtTail(head,16);
    InsetAtTail(head,17);
    printLinkedList(head);
 
    int k =2;
    Node* newhead1 = ReverseK(head,k);
    printLinkedList(newhead1);
}