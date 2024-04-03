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
    node *tem  = head;
    while(tem!=nullptr){
        cout<<tem->data<<" ";
        tem = tem->next;
    }
}

node *del(node *head){
    node *temp = head;
    head = head->next;
    head->prev  = nullptr;
    free(temp);
    return head;
}
node *delTail(node* head){
    node *temp = head;
    while(temp->next->next!=nullptr){
        temp = temp->next;
    }
    temp->next->prev = nullptr;
    free(temp->next);  
    temp->next = nullptr;
    return head;
}

node *delkth(node *head,int k){
    if(head==NULL) return NULL;
    node * temp = head;
    int cnt = 0;
    while (temp!=nullptr){
        cnt++;
        if(cnt==k){
            break;
        }
        temp = temp->next;
    }
    node *back = temp->prev;
    node *front = temp->next;
    if(back==nullptr&&front==nullptr){
        return NULL;
    }
    if(back==NULL){
       return del(head);
    } 
    if(front==nullptr){
        return delTail(head);
    }
    back->next = front;
    front->prev = back;
    temp->next = nullptr;
    temp->prev = nullptr;
    free(temp);

 return head;
}

int main(){

 vector<int> v = {10,20,30,40,50};


 node *head = arr2LL(v);
 node *temp = delkth(head,5);
 print(temp);



    return 0;
}