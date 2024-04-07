#include<bits/stdc++.h>
using namespace std;

class node {
    public:

    int data;
    node *next;
    node(int data){
        this->data = data;
        next = nullptr;
    }

};
node *arr2ll(vector<int> &arr){
    node *last = new node(arr[0]);
    node *head = last;
    for(int i=1;i<arr.size();i++){
        node *curr = new node(arr[i]);
        last->next = curr;
        last = last->next;
    }
   return head;
}

node *print(node *head){
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
}
node *adding(node  *t1,node *t2){
  
    int carry = 0; 
    node *dummynode = new node(-1);
    node *curr = dummynode;
    while(t1!=NULL || t2!=NULL){
      int sum = carry;
      if(t1) sum = sum + (t1->data);
      if(t2) sum = sum + (t2->data);
      node *newnode =  new node(sum%10);
      carry = sum/10;
      curr->next = newnode;
      curr = curr->next;
    
      
      if(t1) t1 = t1->next;
      if(t2) t2 = t2->next;

        
    }
    if( carry){ node *car = new node(carry);
            curr->next = car;
    }

    return dummynode->next;
    

}
int main(){
    vector<int> arr = {8,5,4};
    vector<int> brr = {4,4,5};
    node *head1 = arr2ll(arr);
     node *head2 = arr2ll(brr);
    //print(head1); cout<<endl;
    //print(head2);
   node *add =  adding(head1,head2);
   print(add);


    return 0;
}