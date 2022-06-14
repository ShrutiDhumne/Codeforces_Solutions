#include <iostream>

using namespace std;
int main(){

	int t;
	cin>>t;
	int a ,b,c,x,y,z;
	for (int k=0;k<t;k++){
		cin>>a>>b>>c;
		
		z = c;
		y = z*2 + b;
		x = y*1 + a;

		cout<<x<<" "<<y<<" "<<z<<"\n";
	}
	return 0;
}