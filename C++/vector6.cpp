#include<iostream>
using namespace std;
#include<vector>

//to find the number of pairs whose sum is equal to x.
int main(){

    vector<int> v(6);

    for(int i=0; i<6;i++){
        cin>>v[i];
    }

    cout<<"Enter x: ";
    int x;
    cin>>x;

    int count=0;

    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==x){
                count+=1;
            }
        }
    }
    cout<<count<<endl;
}