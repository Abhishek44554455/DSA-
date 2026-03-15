#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data=val;
        next=NULL;
    }
};
int main(){
    int arr[4]={2,4,6,8};
    Node *head;
    head=NULL;
    for(int i=0;i<4;i++){
        if(head==NULL){
            head=new Node(arr[i]);
        }
        else{
            Node *temp;
            temp=new Node(arr[i]);
            temp->next=head;
            head=temp;
        }
    }
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}