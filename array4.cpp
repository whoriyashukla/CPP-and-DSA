#include<iostream>
using namespace std;

int main(){
    int array[]={3, 67, 4, 8, 33, 9};
    int key=3;
    int size=sizeof(array)/sizeof(array[0]);
    int ans=-1;
    

    for(int i=0; i<size;i++){
        if(key==array[i]){
            ans=array[i];
            break;
        }
        
        
        
    }
    cout<<ans<<endl;
    

}