#include<iostream>
#include<vector>
using namespace std;
// void incr(int *ptr){
//     *ptr=*ptr+1;
// }
// void dbl(int *num){
   
//    for(int i=0;i<5;i++){
//     num[i]=num[i]*2;
//    }
// }

//basic pass by value

// int main(){
//     int num=10;
//     int temp=num;
//     incr(&num);
//     cout<<num;
//     int arr[5]={1,2,3,4,5};
//     dbl(arr);
//     for(int i=0;i<5;i++){
//     cout<<arr[i]<<" ";
//      }

//  }

//swapping using pointer

// void swapping(int *p1,int *p2){
//     int temp=*p1;
//     *p1=*p2;
//     *p2=temp;
// }

// int main(){
//     int first=10;
//     int second=20;
//     swapping(&first,&second);
//     cout<<first<<" "<<second;
// }

//swapping using reference(&)

// void swapping(int &a,int &b){
//     int temp=a;
//     a=b;
// }

// int main(){
//     int first=10,second=20;
//     swapping(first,second);
//     cout<<first<<" "<<second;
// }

//pointers or reference in vector
void pass(vector<int>*v1){
    for(int i=0;i<5;i++){
        (*v1)[i]=10;
    }
}
int main(){
    vector<int>v(5,0);
    pass(&v);
    for(auto x:v){
        cout<<x<<" ";
    }
}


//vector string refernce ki help se
//arr char ptr ki help se