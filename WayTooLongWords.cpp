#include <iostream>
#include <string>
using namespace std;

void solve(){
	string s;
	cin>>s;
	int len;
	len = s.length();
	if(len > 10){
		cout<<s[0]<<len-2<<s[len-1]<<"\n";

	}
	else{
		cout<<s<<"\n";
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
