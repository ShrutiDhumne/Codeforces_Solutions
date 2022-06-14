#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    string digit=" ";
    int n;
    cin>>n;

    while(n>=4){
        digit+="1";
        n-=2;
    }
    if(n==2){
        digit+="1";
        n-=2;
    }
    else if(n==3){
        digit+="7";
        n-=3;
    }
    reverse(digit.begin(),digit.end());
    cout<<digit<<endl;
}
 
int main(){
    int t;
    cin>>t;
    for(int i = 0;i<t;i++){
        solve();
    }
    return 0;
}