#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    long long int n,k;
    cin>>n>>k;
    if(n%2==0){
        if(k<=n){
            if(k%2==0)
                cout<<0<<endl;
            else
                cout<<1<<endl;
        }
        else
            cout<<k-n<<endl;
    }
    else{
        if(k<=n){
            if(k%2!=0)
                cout<<0<<endl;
            else
                cout<<1<<endl;
        }
        else
            cout<<k-n<<endl;
    }
    
}

 
int main(){
    int t;
    cin>>t;
    for(int i = 0;i<t;i++){
        solve();
    }
    return 0;
}