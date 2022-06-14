#include <iostream>

using namespace std;
int main(){

	int t,ele;
	cin>>t;
	int a ,b,c;
	//cin>>a>>b>>c;

	for (int k=0;k<t;k++){
		cin>>a>>b>>c;
		// out:
		// for (int x = 1; x<= 10000;x++){
		// 	for(int y = 1; y<= x;y++){
		// 		if (x%y == a){
		// 			for(int z=1; z<=10000; z++){
		// 				if(y%z == b){
		// 					if(z%x == c){
								// cout<<x<<" "<<y<<" "<<z<<"\n";
		// 						goto out;
		// 					}
		// 				}
		// 			}
		// 		}
		// 	}
		// }
		cout<<a+b+c<<" "<<b+c<<" "<<c<<"\n";
	}
	return 0;
}