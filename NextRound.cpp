#include <iostream>
#include <string>
using namespace std;

void solve(){
	int n,target;
	cin>>n>>target;
	int a[n];
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
	
	if(a[target] == 0){
		for(int i=target;i>=1;i--){
			if(a[i]==0){
				target--;
			}
		}
		cout<<target;
	}
	else {
		for(int i=target;i<=n;i++){
			if(a[target] == a[i+1]){
				target++;
			}
		}
		cout<<target;
	}
	
}
int main(){
	// int t;
	// cin>>t;
	// for(i=0;i<t;i++){
		solve();
	// }
	return 0;
}


