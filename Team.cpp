#include <iostream>
#include <string>
using namespace std;

int solve(){
	int a,b,c,k=0;
	cin>>a>>b>>c;
 
	 if(a==1 && b== 1)
	 k++;
	 
	 else if (c==1 && b==1 )
	 k++;
	 
	 else if(a==1 && c==1 )
	 k++;
	 
	 else if(a==1 && b==1 && c==1)
	 k++;

	return k;
}
int main(){
	int t,i,k=0;
	cin>>t;
	for(i=0;i<t;i++){
		k = k+solve();
	}
	cout<<k<<"\n";
	return 0;
}


