#include<iostream>
using namespace std;

class Customer{
    public:
    string name;
    int account_number;
    int balance;

    // Customer(string a,int b,int c){
    //     name=a;
    //     account_number=b;
    //     balance=c;
    // }
    Customer(string name,int account_number,int balance){
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance;
    }
    //Copy Constructor
    Customer(Customer &B){
        name=B.name;
        account_number=B.account_number;
        balance=B.balance;
    }
};
int main(){
    Customer A1("Abhishek",1234,999);
    Customer A2("Mohit",12345,1000);
    Customer A3("Rohit",25,123);
    A1.display();
    A2.display();
    A3.display();
    Customer A4(A3);
    A4.display();
    
} 