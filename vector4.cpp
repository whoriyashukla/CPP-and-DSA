#include<iostream>
using namespace std;
#include<vector>

//to find if the array is sorted or not.
int main(){

    vector<int> v(6);

    for(int i=0; i<6;i++){
        cin>>v[i];
    }

    bool sorted=true;
    for(int i=0;i<6;i++){
        if(v[i]>=v[i+1]){
            sorted=false;
        }
    }
    cout<<sorted<<endl;


   

    
    
    

}