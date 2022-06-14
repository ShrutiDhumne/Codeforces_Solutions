#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
	ll a,b;
    cin>>a>>b;

    if(a>b)
      swap(a,b);
    if(a==b)
      cout<<"0 0\n";
    else{
      ll x=abs(a-b);
      ll y= a%x;
      y = min(y, x-y);
      cout<<x<<" "<<y<<"\n";
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