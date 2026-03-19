#include<iostream>
using namespace std;
int main(){
    string s="abcdabehf";
    int hash[256]={0};
    for(int i=0;i<s.length();i++){
        hash[s[i]]+=1;
    }
    cout<<hash['a'];
}