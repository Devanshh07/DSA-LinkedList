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

node *  dlt(node *head){ //take original Head
    node *temp = head; //store it to the temp
    head = head->next; // now change Head to next one;
    free(temp); //delete from memory 
    return head; //return newHead;

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

 node *newHead = dlt(head); //Store newHead to variable NewHead;
 print(newHead); //Now passing to the function print to print LL at the NewHead;
 
   







    return 0;
}