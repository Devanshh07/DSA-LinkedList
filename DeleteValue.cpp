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

node * delEl(node *head,int el){
    if(head ==NULL) return head;
    if(head->data == el){
        node *temp = head;
        head = head->next;
        free(temp);
        return head;
    } 
    node *temp = head;
    node *prev = NULL;
    while(temp!=NULL){
        if(temp->data = el){
            
            prev->next = prev->next->next;
            free(temp);
            return head;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
node *print(node *head){
    node * temp = head;
    while(temp!=NULL){
        
        cout<<temp->data<<" ";
        temp= temp->next;
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

  node *newHead = delEl(head,200);
  print(newHead);



    return 0;
}