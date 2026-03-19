#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtHead(Node* &head,Node* &tail,int data){
    //check if LL is empty
    if(head==NULL){
        Node* newNode=new Node(data);
        head=tail=newNode;
        return;
    }
    //create a Node
    Node* newNode=new Node(data);
    //connect with headnode
    newNode->next=head;
    //update newnode as headnode
    head=newNode;
    
} 

void insertAtTail(Node* &head,Node* &tail,int data){
    //if LL is empty
    if(head==NULL){
        Node* newNode=new Node(data);
        head=tail=newNode;
        return;
    }

    //create a Node 
    Node* newNode=new Node(data);
    //connect the tail node
    tail->next=newNode;
    //update the temp with tail node
    tail=newNode;
}

int findLength(Node* head){
    int count=0;
    while(head!=NULL){
      
        head=head->next;
        count=count+1;
    }
    // return count;
    
}

void insertAtPosition(int data,int position,Node* &head,Node* &tail){
    //if LL is empty
    if(head==NULL){
        Node* newNode=new Node(data);
        head=tail=newNode;
        return;
    }
    //find the position
    if(position==0){
        insertAtHead(head,tail,data);
    }
    int len=findLength(head);
    if(position==len){
        insertAtTail(head,tail,data);
    }
    int i=1;
    Node* prev=head;
    while(i<position){
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;
    //create a newNode
    Node* newNode=new Node(data);
    //update the address
    newNode->next=curr;
    prev->next=newNode;
}



void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
}

int main(){
    Node* tail=NULL;
    Node* head=NULL;
    
    // insertAtHead(head,tail,20);
    // insertAtHead(head,tail,30);
    // insertAtHead(head,tail,40);                                                   
    // insertAtHead(head,tail,50);
    insertAtTail(head,tail,77);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,40);
    insertAtTail(head, tail,50);
    insertAtPosition(35,4 ,head,tail);
    print(head);
    // cout<<head->data;
}