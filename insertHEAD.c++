#include<iostream>

using namespace std;

class node {
    public:
    int data;
    node *next;
    node (int data){
        this->data = data;
        next = NULL;
    }

};

node * insert(node *head,int data){
    node *newnode = new node(data);
    newnode->next = head;
    head = newnode;
    
    return head;
    
}
node *print (node *head){ //instead of all this function look at bottom |
    node *temp = head;     //                                           
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main(){
 node *n1 = new node (10);
 node *n2 = new node (20);
 node *n3 = new node (30);
 node *n4 = new node (40);
 node * head = n1;
 node *tail = n4;
 n1->next = n2;
 n2->next = n3;
 n3->next = n4;
 
 head = insert(head,1); 
 print(head);


 









    return 0;
}