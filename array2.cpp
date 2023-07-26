#include<iostream>
using namespace std;

int main(){
    int array[]={11,20,13,45,5};
    int size=sizeof(array)/sizeof(array[0]);

    int max=0;

   for(int i=0;i<size;i++){
    if(array[i]>max){
        max=array[i];

    }
    

   }
   cout<<max<<endl;
    

}

