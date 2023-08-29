#include<iostream>
using namespace std;
//To find the second largest number in an array.

int largestnumber(int array[], int size){
    int max=INT16_MIN;
    int maxindex=-1;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
            maxindex=i;
        }
    }
    return maxindex;

}

int main(){


    int array[]={1,45,6,2,45};
    int largestele = largestnumber(array, 5);
     cout<<array[largestele]<<endl;
     int largestnum = array[largestele];
     for(int i=0;i<5;i++){      //If there are 2 largest number in an array.
        if(array[i]==largestnum){
             array[i]=-1;


        }
     }
   
    int secondlargestele = largestnumber(array, 5);
    cout<<array[secondlargestele]<<endl;
    
   
    
       
        
        
        
    }
   
    
