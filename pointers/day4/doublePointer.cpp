#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=10;
    int *p=&n;
    cout<<p<<endl;
    int **ptr=&p;
    cout<<*ptr;
}