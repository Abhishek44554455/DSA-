#include<iostream>
using namespace std;

class student
{
    private:
    string name;
    int age ; int rollnumber;
    string grade;
    //function getter and setter
    public:
    void setName(string n){
        if(n.size()==0){
            cout<<"Invalid name";
        }
        name=n;
    }
    void setAge(int a){
        age=a;
    }
    void getname(){
        cout<<name<<endl;
    }
};

int main(){
    student s1;
    s1.setName("Abhishek");
    s1.setAge(19);
    s1.getname();

} 