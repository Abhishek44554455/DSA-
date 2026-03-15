#include<iostream>
using namespace std;

void dbl(int *ptr){
    for(int i=0;i<5;i++){
        ptr[i]=ptr[i]*2;
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int *p=arr;
    for(int i=0;i<5;i++){
        cout<<(*p+i+1)<<endl;
    }
    dbl(arr);
    for(auto x:arr){
        cout<<x;
    }
}