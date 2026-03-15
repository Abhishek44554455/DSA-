#include<iostream>
using namespace std;
class Node{     //user defined Data Type
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }
}; 

class LinkedList{
    Node *head;
    Node *tail;
    LinkedList(){
        head=tail=NULL;
    }
    void insertAtEnd(int val){
        Node* temp= new Node(val);
        
        if(head==NULL){
            head=tail=temp;
        }
    }
};

int main(){
    Node* head;
    Node* tail;
    tail=head=NULL;
    if(head==NULL){
       head =new Node(10);
    }
}