#include<iostream>

using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void print(node *head){
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
        
    }
}

node *takeinput(){
    int data;
    node *head = NULL;
    cin>>data;
    while(data!=-1){
        node *newnode = new node(data);
        if(head==NULL){
            head = newnode;
        } else {
             node *temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newnode;
        }
        cin>>data;

    }
    return head;
}

node insertion(node *head,int i,int data){
   
   node *newnode = new node(data);
   int count = 0;
     node *temp = head;
   while(count<i-1){
     temp = temp->next;
     count++;
   }
   node *nxtNode = temp->next;
   temp->next = newnode;
  newnode->next = nxtNode;
}


int main (){


/*
 node *n1 = new node(10);
 node *n2 = new node(20);
 node *n3 = new node(30);
 node *n4 = new node(40);
 node *head = n1;
 node *tail = n4;
 n1->next = n2;
 n2->next = n3;
 n3->next = n4;*/
 node *head = takeinput();
  print(head);
 int i,data;
 cin>>i>>data;
 insertion(head,i,data);
 print(head);




    return 0;
}