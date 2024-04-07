#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data = data;
        next = nullptr;
    }

};
node *arr2ll(vector<int> &arr){
    node *head = new node(arr[0]);
    node *mover = head;
    for(int i=1;i<arr.size();i++){
        node *temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
        temp = temp->next;
    }
    return head;
}
node *Tailfind(node *head){
    node *temp = head; 
    node *Tail = nullptr;
    while(temp!=NULL){
        temp = temp->next;
    }
    Tail = temp;
    return Tail;
}
node *rev(node *head,node *tail){
    node *first = head;
    node *last = tail;
    while(first!=last){
        swap(first->data,last->data);
    }
    return head;
}

node *print(node *head){
    node *tem = head;
    while(tem!=NULL){
         cout<<tem->data<<" ";
         tem = tem->next;
    }
}
node *reverse(node *head){
    node *last = head;
    node *curr = head->next;
    node *front = curr->next;
    while(curr!=NULL){
     last->next = front;
     front = last;
     //upadate 
     last = last->next;
     curr = curr->next;
     front  = front->next;   
    }
    return last;

}
int main(){

    vector<int> v = {10,20,30,40,50};
   
   node *head = arr2ll(v);
   
   node *Tail = Tailfind(head);
   node *newhead = rev(head,Tail);
  print(reverse(head));


    return 0;
}