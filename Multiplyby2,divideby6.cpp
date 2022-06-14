#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,steps=0;
    cin>>n;

    if(n==1){
        cout<<0<<endl;
        return;
    }
    if (n % 3 != 0) {
        cout << -1 <<endl;
        return;
    }
    while (n != 1) {
        if (n % 3 != 0) {
            cout << -1 <<endl;
            return;
        }
        if (n % 6 == 0){
            n /= 6;
        }
        else{
            n *= 2;
        } 
        steps++;
    }
    cout<<steps<<endl;
    
}

 
int main(){
    int t;
    cin>>t;
    for(int i = 0;i<t;i++){
        solve();
    }
    return 0;
}