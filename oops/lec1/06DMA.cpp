#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int age,rollNumber;
    string grade;
};
int main(){
    student *s1=new student;
    (*s1).name="Abhishek";

    (*s1).age=21;
    (*s1).rollNumber=007;
    (*s1).grade="A+";

    cout<<s1->name<<" ";
}