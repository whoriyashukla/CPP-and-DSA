#include<iostream>
using namespace std;
#include<vector>

//to find difference between elements present at even and odd indices.
int main(){


    vector<int> v(6);

    for(int i=0; i<6;i++){
        cin>>v[i];
    }
    int count=0;
    for(int i=0;i<v.size();i++){
        if(i%2==0){
            count+=v[i];

        
    } else{
        count-=v[i];
    }
    }
    cout<<count<<endl;

}



    