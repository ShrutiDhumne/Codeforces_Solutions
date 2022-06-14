#include <iostream>

using namespace std;
int main(){
	int t;
	cin>>t;
	int a ,b,c,x,y,i;

	for (int k=0;k<t;k++){
		cin>>a>>b>>c>>x>>y;

		i = 0;
		x = x-a;
		y = y-b;

		if( (x > 0) && (y > 0)){
			i = c-(x+y);
		}
		else if (x>0){
			i = c-x;
		}
		else if(y>0){
			i = c-y;
		}
		else{
			i = 0;
		}
		
		if(i<0){
			cout<<"No\n";
		}
		else{
			cout<<"Yes\n";
		}

		
	}
	return 0;
}