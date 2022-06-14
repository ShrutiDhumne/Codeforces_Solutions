#include <bits/stdc++.h>
using namespace std;
void solve(){
   int n; 
   cin>>n;
   int a[n];   
   unordered_map<int ,int > m;
   for(int i=0;i<n;i++){
       cin>>a[i];
       m[a[i]]++;
   }   
   int unique = 0;   
   for(auto value : m){
       if(value.second == 1){
           unique = value.first;
       }
     
   }   
   for(int i=0; i<n;i++){
       if(a[i] == unique){
           cout<<i+1<<endl;
           break;
       }
    }
}
int main() {
	int t; 
	cin>>t;
	for(int i=0;i<t;i++){
		solve();
	}	
	return 0;
}
