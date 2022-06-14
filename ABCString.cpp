#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    string a;
    int count=0,c=0;
    cin>>a;

    if(a[0] == a[a.length()-1]){
        cout<<"No"<<endl;
        return;
    }

    for(int i=0;i<a.length();i++){
        if(a[i] == 'A'){
            count++;
        }
        else if(a[i] == 'B'){
            count--;
        }
        else{
            c++;
        }
    }  

    if(count == 0 && c == 0){
        cout<<"Yes"<<endl;
    }
    else if (count > 0 && abs(count)==c){
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