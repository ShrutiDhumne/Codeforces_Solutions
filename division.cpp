#include <iostream>

using namespace std;
int main(){

	int t,ele;
	cin>>t;

	for (int i=0;i<t;i++){
		cin>>ele;
		if (ele >= 1900){
			cout<<"Division 1\n";
		}
		else if (ele >= 1600){
			cout<<"Division 2\n";
		}
		else if (ele >= 1400){
			cout<<"Division 3\n";
		}
		else{
			cout<<"Division 4\n";
		}
	}
	return 0;
}