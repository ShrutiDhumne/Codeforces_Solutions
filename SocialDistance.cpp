#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    long long int m,n;
    cin>>n>>m;
    long long int count = n,emptychair[n];

    for(int i =0;i<n;i++){
        cin>>emptychair[i];
    }
    sort(emptychair,emptychair+n);
    for(int i =1;i<n;i++){
        count += emptychair[i];
    }
    count += emptychair[n-1];

    if(count <= m){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
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