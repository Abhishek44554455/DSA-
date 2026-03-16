//Doubly Linked list
//allows faster insertion and removals anywhere in the list
//no random access like vectors
#include<iostream>
#include<list>
using namespace std;
int main(){
    //creation
    /*
    list<int> myList;

    //insertion
    myList.push_back(10);
    //10
    myList.push_back(20);
    //10->20
    myList.push_back(30);
    //10->20->30
    myList.push_back(40);
    //10->20->30->40
    myList.push_front(100);
    //100->10->20->30->40
    myList.pop_back();
    myList.pop_front();
    //cout<<myList.size()<<endl;
    //cout<<myList.empty();
    // cout<<myList.front()<<endl;
    // cout<<myList.back()<<endl;
    list<int>::iterator it=myList.begin();
    while(it!=myList.end()){
        cout<<*it<<" ";
        it++;
    }
        */
    list<int> mylist1;
    mylist1.push_back(10);
    mylist1.push_back(20);
    mylist1.push_back(30);
    mylist1.push_back(40);

    list<int>mylist2;
    mylist2.push_back(25);
    mylist2.push_back(50);
    mylist2.push_back(75);
    mylist2.push_back(100);

    mylist1.swap(mylist2);

    list<int>::iterator it=mylist1.begin();
    while(it!=mylist1.end()){
        cout<<*it<<" ";
        it++;
    }



    
}