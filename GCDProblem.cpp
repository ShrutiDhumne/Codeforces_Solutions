#include <bits/stdc++.h>
using namespace std;

void solve(){
    int num, a, b, c;
    cin>>num;
    c = 1;
 
    if((num-1) % 2 == 1){
        a = 2;
        b = num-3;
    } 
    else{
        int half = num/2;
        if (half % 2 == 0){
            a = half - 1;
            b = half + 1;
        }
        else{
            a = half - 2;
            b = half + 2; 
        }
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
}


int main(){
    int t;
    cin>>t;
 
    for(int i=0; i<t; t++){
        solve();        
    }
    return 0;
}
