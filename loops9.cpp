#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int digits=0;
    while(n>0){
        int lastdigits = n%10;
        digits+=lastdigits;
        n/=10;
    }
    cout<<digits<<endl;
}