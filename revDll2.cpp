#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node *prev;
    node *next;
    node (int data){
        this->data = data;
        prev = nullptr;
        next = nullptr;
    }
    node(int data,node * prev,node *next){
        this->data  = data;
        
    }

};

node *arr2list(vector<int> &arr){
    node *head = new node(arr[0]);
    node *mover = head;
    for(int i=1;i<arr.size();i++){
        node *temp = new node(arr[i]);
        mover->next = temp;
        temp->prev = mover;
        mover = mover->next;
    }
    return head;
}
node *reverse(node *head){

    if(head==NULL || head->next == NULL){
        return head;
    }
   node *curr = head;
   node *last = NULL;
   while(curr!=NULL){
     last = curr->prev;
     curr->prev = curr->next;
     curr->next = last;

     curr =curr->next;
   }
   return last->prev;
}

node *print(node *head){
    node *temp = head;
    while(temp!=NULL){
              cout<<temp->data<<" ";
              temp = temp->next;
    }
}

int main(){
vector<int> v = {10,20,30,40,50};

stack<int> st;

 node *head = arr2list(v);
node *newhead = reverse(head);
print (newhead);


    return 0;
}

