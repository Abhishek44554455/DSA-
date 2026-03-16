//dynamic array that can grow or shrink in size
//insertion and removal of elements at the end is efficient
//suitable for most scenarios when elements need to be stored in a linear sequence



#include<bits/stdc++.h>
using namespace std;
int main(){
    //creation
    // vector<int>marks;
    // vector<int>marks;
    // marks.push_back(20);
    // marks.push_back(30);
    // marks.push_back(40);
    // cout<<*(marks.begin());
    // cout<<marks.front();
    // cout<<marks[0]<<endl;
    // cout<<marks.at(0)<<endl;
    // cout<<marks.capacity()<<endl;
    // cout<<marks.max_size()<<endl;
    // marks.clear();
    // cout<<marks.size()<<endl;
    // marks.insert(marks.begin(),50);

    // for(int i:marks){
    //     cout<<i<<" ";
    // }


    vector<int >miles(10);

    vector<int>distance(15,0);


    //traversing using iterator

    /*vector<int> first;
    first.push_back(11);
    first.push_back(12);
    first.push_back(13);
    first.push_back(14);
    

    //create an iterator

    vector<int>::iterator it=first.begin();
    while(it !=first.end()){
        cout<<*it<<" ";
        it++;
    }*/

    //2D Vector

    /*
    vector<vector<int>>arr(5,vector<int>(4,0));
    //2d arrray created with 5 rows and 4 columns and initialise value of each cell by 0
    int totalRows=arr.size();
    int totalColumns=arr[0].size();
    cout<<totalRows<<" "<<totalColumns;
    */
    vector<vector<int>>br(4);
    br[0]=vector<int>(4);
    br[1]=vector<int>(2);
    br[2]=vector<int>(5);
    br[3]=vector<int>(3);
    int totalRow=br.size();

    for(int i=0;i<4;i++){
        int totalCol=br[i].size();
        cout<<totalCol<<" "<<endl;
    }
    cout<<totalRow<<" ";

}