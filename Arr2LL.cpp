#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class node {
    public:
    int data ;
    node *next;
    node(int data){
        this->data = data;
        next = NULL;
    }

};
node *convert(vector<int> &arr){
    node *head = new node(arr[0]);
    node *mover = head;
    for(int i=1;i<arr.size();i++){
        node *temp = new node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
return head;

}

int main(){
    vector<int> v = {10,20,30,40,50};
    node *head = convert(v);
 
   
   



    return 0;
}