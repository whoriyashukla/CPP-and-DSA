/*

#include<iostream>
#include <vector>
using namespace std;

// Find the total no of pairs in the array whose sum is x

// y = 20
// x = 6,5,33,14,10,10

int main() {
    int y;
    cin >> y;

    int x;
    cin >> x;

    int ans = 0;

    vector<int> arr;

    for(int i=0; i<x; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }

    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr.size()-i; j++){
            if(arr[i]+arr[j] == y){
                ans++;
            }
        }
    }

    cout << ans;
    
}


*/
#include<iostream>
using namespace std;

int main(){
    int array[]={1,2,3,5};
    int x=8;
    int count=0;

    int size = sizeof(array)/sizeof(array[0]);

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
             if(array[i]+array[j]+array[k]==x){
                count++;
                
            }

            }
        }
    }
    cout<<count<<endl;
}