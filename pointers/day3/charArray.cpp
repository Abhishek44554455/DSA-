#include<iostream>
using namespace std;
int main(){
    // char arr[5]={"1234"};
    // char *ptr=arr;
    // cout<<arr<<endl;  //char type ke datatype mai jb tk null na aajaye tb tk print krta hai different hai int arr type se
    // cout<<ptr<<endl;
    // // if you want to print address of char array
    // cout<<(void*)arr<<endl;
    // cout<<(void *)ptr<<endl;

    char name='a';
    char *ptr=&name;
    cout<<(void*)ptr<<endl;
    cout<<(void*)&name<<endl;
    
}
