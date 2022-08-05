#include <bits/stdc++.h>>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

node* Reverse(node* &head){
    node* prev=NULL, *curr=head, *next;
    if(head->next == NULL){
        return head;
    }
    
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

node* recReverse(node* &head){
    if(head->next == NULL || head == NULL){
        return head;
    }
    node* newHead = recReverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

int main(){

    return 0;
}