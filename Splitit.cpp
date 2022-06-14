#include <bits/stdc++.h>
using namespace std;

void solve(){

  string str;
  int k,i,len;
  cin>>len>>k>>str;

  if (2*k+1 > len){
      cout<<"NO"<<endl;
  }
  else{
      for(i=0; i<k; i++){
        
          if (str[i] != str[len-i-1]){
              cout<<"NO"<<endl;
              break;
          }
      }
      if (i == k){
          cout<<"YES"<<endl;
      }
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