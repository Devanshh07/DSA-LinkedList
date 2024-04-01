#include<iostream> 

using namespace std;

class node {
    public:
    int data;
    node * next;
    node (int data){
        this->data = data;
        next = NULL;
    }

};
node *insert(node *head,int i,int data){
    if(head==NULL) {
        return new node(data);
    }
    node *temp = head;
    int cnt = 1;
    while(cnt<i-1){
        temp = temp->next;
        cnt++;
    }
    node *newnode = new node(data);
    node *nxtNode = temp->next;
    temp->next = newnode;
    newnode->next = nxtNode;

    return head;
}

node *print (node *head){
    node *temp = head;
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
node *n5 = new node (50);
node *head = n1;
node *tail = n5;
n1->next = n2;
n2->next = n3;
n3->next = n4;
n4->next = n5;

head = insert(head,3,999);
print(head);













    return 0;
}