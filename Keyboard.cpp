#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
    char store[] = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
    char ch;
    string str,input;
    cin >> ch;
    cin >> input;
    if(ch == 'R'){
        for(int i = 0; i < input.size(); i++){
            for(int j = 0; j < 30 ; j++){
               if(input[i] == store[j])
                str+=store[j-1];
            }
        }
    }
    else{
        for(int i = 0; i < input.size(); i++){
            for(int j = 0; j < 30 ; j++){
               if(input[i] == store[j])
                str+=store[j+1];
            }
        }
    }
    cout<<str<<endl;
}
int main(){
    // int t,i;
    // cin>>t;
    // for(i=0;i<t;i++){
        solve();
    // }
    return 0;
}
 