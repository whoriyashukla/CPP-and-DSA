#include<iostream>
using namespace std;
#include<vector>

//to find the last occurence of an element in a vector.
int main(){

    vector<int> v(6);

    for(int i=0; i<6;i++){
        cin>>v[i];
    }

    cout<<"Enter x: ";
    int x;
    cin>>x;

    int occurence=-1;
    for(int i=0; i<v.size();i++){
        if(v[i]==x){
            occurence=i;
        }
    }
    cout<<occurence<<endl;

}