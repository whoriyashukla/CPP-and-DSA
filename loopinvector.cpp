#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector<int> v;


    for(int i=0; i<5; i++){ //for loop
        int element;
        cin>>element;
        v.push_back(element);

    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //for each loop
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;

    //while loop
    int idx=0;
    while(idx<v.size()){
        cout<<v[idx++]<<" ";
    }




}