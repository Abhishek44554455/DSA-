#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int age ; int rollnumber;
    string grade;
};

int main(){
    student s1;
    // s1.name="Abhishek";
    cout<<"Enter name";
    cin>>s1.name;
    s1.rollnumber=12;
    s1.grade="A+";
    s1.age=19;
    
    cout<<s1.age;
    cout<<s1.name;
} 
//class generally provides blueprint or template of object also  class is user defined datatypes
//a class has multiple objects
