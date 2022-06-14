#include <bits/stdc++.h>
 
using namespace std;
 
void print_vector(vector<int> v){
    for (int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
void solve(){
	int n,k,num;
	cin>>n;
	vector<int> nums;
    vector<int> iterations;

	int iteration = 0;
    int count = 0;
    while (n > 0){
        int remainder = n % 10;
        if (remainder != 0){
            nums.push_back(remainder*pow(10,iteration));
            count++;
        }
        n = n / 10;
        iteration++;
    } 
    cout<<count<<endl;
    print_vector(nums);
    nums.clear();	
}
int main(){
	int t,i;
	cin>>t;
	for(i=0;i<t;i++){
		solve();
	}
	return 0;
}


