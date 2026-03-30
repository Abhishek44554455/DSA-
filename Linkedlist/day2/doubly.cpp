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
void deleteAtHead(Node* &head,Node* &tail,int position){
    int len=getLength(head);
    if(head==NULL){
        cout<<"Linked List is empty";
        return;
    }
    if(head->next==NULL){
        Node* temp=head;
        head=tail=NULL;
        delete temp;
        return ;

    }
    if(position==1){
        //want to delete first element
    Node* temp=head;
    head=head->next;
    head->prev=NULL;
    temp->next=NULL;
    delete temp;
    return;
    }
    if(position==len){
        //delete last node;
        Node* temp=tail;
        tail=tail->prev;
        temp->prev=NULL;
        tail->next=NULL;
        delete temp;
    }
    //delete from middle

    //step1-: find left,curr,right
    int i=1;
    Node* left=head;
    while(i<position-1){
        left=left->next;
        i++;
    }
    Node* curr=left->next;
    Node* right=curr->next;

    //update the connections
    curr->prev=NULL;
    curr->next=NULL;
    left->next=right;
    right->prev=left;

}

int main(){
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* head=first;
    Node* tail=third;
    // Node* head=NULL;
    // Node* tail=NULL;
    
    first->next=second;
    second->prev=first;
    second->next=third;
    third->prev=second;
    cout<<endl;
    
    insertAtHead(head,tail,101);
    
    print(head);
    // insertAtHead(head,tail,10);
    // insertAtHead(head,tail,20);
    // insertAtHead(head,tail,30);
    print(head);
}