#include<iostream>
#include<bits/stdc++.h>


using namespace std;

class node {
    public:
    int data;
    node *next;
    node *prev;
    node(int data){
        this->data = data;
        next = nullptr;
        prev = nullptr;
    }

};

node *arr2LL( vector<int> &arr){

    node *head = new node(arr[0]);
    node *mover = head;
    for(int i=1;i<arr.size();i++){
        node *temp = new node (arr[i]);
        temp->prev = mover;
        mover->next = temp;
        mover = temp;
    }
    return head;

}
node *print (node *head){
    node *temp  = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
node *tailFind(node *head){
    node *tail = nullptr;
    node *extra = head;
    while(extra->next!=nullptr){
        extra = extra->next;

    }
    tail = extra;
    return tail;
}
node *reverse(node *tail){
    node* exTail = tail;
    while(exTail!=nullptr){
        cout<<exTail->data<<" ";
        exTail = exTail->prev;

    }
}
int main(){

 vector<int> v = {10,20,30,40,50};



 node *head = arr2LL(v);
 print(head);
 cout<<endl;
 cout<<endl;
 cout<<endl;
 reverse(tailFind(arr2LL(v)));


 //cout<<tailFind(head);




    return 0;
}