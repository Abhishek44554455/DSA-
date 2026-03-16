//adaptor class that proviides a first in first out data structure
//implemented using other containers
#include<iostream>
#include<queue>
using namespace std;
int main(){

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.pop();
    cout<<q.size()<<endl;
    if(q.empty()==true){
        cout<<"queue is empty"<<endl;
    }else{
        cout<<"queue is not empty"<<endl;
    }
    cout<<q.front() ;
}