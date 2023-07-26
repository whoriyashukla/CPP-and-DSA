#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    int power=1;
    while(n>0){
        int lastdigits = n%2;
        ans+=lastdigits*power;
        power*=10;
        n/=2;

    }
    cout<<ans<<endl;

}