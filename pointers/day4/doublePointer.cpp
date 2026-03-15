#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int n=10;
//     int *p=&n;
//     cout<<p<<endl;
//     int **ptr=&p;
//     cout<<*ptr;
// }

// void fun(int *p1){
//     cout<<p1;
// }
// int main(){
//     int n=10;
//     int *p=&n;
//     cout<<p<<endl;
//     fun(p);

// }
// int main(){
//     int n=10;
//     int *p=&n;
//     int **ptr=&p;
//     cout<<p<<endl;
//     cout<<*ptr+1<<endl;
// }

// int main(){
//     int n=10;
//     int &temp=n;
//     cout<<&n;
//     cout<<(&temp+1);
// }

//change the value to 15 using three pointer

int main(){
    int n=10;
    int *p1=&n;
    int **p2=&p1;
    int ***p3=&p2;
    cout<<(***p3)+5<<endl;

}