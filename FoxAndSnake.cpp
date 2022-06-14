#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int m,n;
    cin>>n>>m;
    for(int i = 1;i<=n;i++){
        for (int j = 1; j<=m;j++){
            if(i%4 == 0){
                if(j!=1)
                    cout<<".";
                else
                    cout<<"#";
            }
            else if(i%2 == 0 && j!=m){
                cout<<".";
            }
            else{
                cout<<"#";
            }
        }
        cout<<"\n";
    }
}
int main(){
	// int t,i;
	// cin>>t;
	// for(i=0;i<t;i++){
		solve();
	// }
	return 0;
}


