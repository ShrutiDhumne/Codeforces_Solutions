#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
    int x,y,z;
    cin>>x>>y>>z;
    if(z==max(x,y)){
        cout<<"YES\n";
        cout<<z<<" "<<min(x,y)<<" "<<min(x,y)<<"\n";
    }
    else if(z<x and x==y){
        cout<<"YES\n"<<x<<" "<<z<<" "<<z<<"\n";
    }
    else{
        cout<<"NO\n";
    }
}
int main(){
    int t,i;
    cin>>t;
    for(i=0;i<t;i++){
        solve();
    }
    return 0;
}
 