#include <bits/stdc++.h>
using namespace std;

void solve(){

    long long int wheels,x=0,y=0;
    cin>>wheels;
 
        if (wheels % 2 != 0 || wheels<=3){
            cout<<-1<<"\n";
        }
        else{
            x = wheels / 4;
            y = wheels / 6;
     
            if (wheels % 6 != 0)
                y += 1;
     
            cout<<y<<" "<<x<<"\n";
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