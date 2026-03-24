#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
int getLength(Node* &head){
    int len=0;
     Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;

}

void insertAtHead(Node* &head,Node* &tail,int data){
    if(head==NULL){
        //LL is empty
        Node* newNode=new Node(data);
        head=tail=newNode;
        
    }else{
        //LL is not empty
        //step-1:create a NewNode
        Node* newNode=new Node(data);
        //link newNode with head
        newNode->next=head;
        //link head prev to newnode
        head->prev=newNode;
        //update newNode as head
        head=newNode;
    }
}

int main(){
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);Node* head=first;
    Node* tail=third;
    
    first->next=second;
    second->prev=first;
    second->next=third;
    third->prev=second;
    cout<<endl;
    insertAtHead(head,tail,101);
    print(head);
}