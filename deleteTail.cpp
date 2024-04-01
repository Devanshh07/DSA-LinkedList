#include<iostream>  
using namespace std;

class node {
    public:
    int data;
    node * next;
    node (int data){

        this->data = data;
        next  = NULL;
    }

};
node *del (node *head){
    node *temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    return head;
}
node *print (node * head){ 
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){

 node *n1 = new node(100);
 node *n2 = new node(200);
 node *n3 = new node (300);
 node *n4 = new node (400);
 node *head = n1;
 n1->next = n2;
 n2->next = n3;
 n3->next = n4;

 head = del(head);
 print(head);




    return 0;
}