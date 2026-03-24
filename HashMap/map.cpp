#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,1,2,3,4,5,1,2,6};
    map<int,int> mpp;
    for(int i=0;i<10;i++){
        mpp[arr[i]]++;
    }
    for(int i=0;i<mpp.size();i++){
        cout<<i<<":"<<mpp[i]<<endl;
    }
}