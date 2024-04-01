#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node *next;
    node(int data){
        this->data = data;
        next = NULL;
    }

};

node *dlt(node *head,int k){ //delete kth node 
    if(head == NULL ) return head;
    if(k==1) {
        head = head->next;
        return head;
    }
    node *prev = NULL;   //store prev node 
    node *temp = head;
    int cnt = 0;
    while(temp!=NULL){
          cnt++;
          if(k==cnt){
            prev->next = prev->next->next; 
            free(temp);
            break;
          }
          prev = temp;
          temp = temp->next;
    }
    return head;
}

node *print (node * head){ 
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int  main(){
 node *n1 = new node(10);
 node *n2 = new node(20);
 node *n3 = new node(30);
 node *n4 = new node(40);
 node *head = n1;
 n1->next = n2;
  n2->next = n3;
  n3->next = n4;
 node *tail = n4;

 node *newHead = dlt(head,2); //Store newHead to variable NewHead;
 print(newHead); //Now passing to the function print to print LL at the NewHead;
 
   







    return 0;
}