#include <bits/stdc++.h>
using namespace std;

vector <int> read_vector(int length){
    vector <int> v;
    int element;
    for (int i=0; i<length; i++){
        cin>>element;
        v.push_back(element);
    }
    return v;
}

void solve(){

  int length,count=0,flag=1;
  cin>>length;
  vector <int> numbers;
  numbers = read_vector(length);

  for(int i=length-2; i>=0; i--){
    if (numbers[i+1] == 0){
        cout<<-1<<endl; 
        flag = 0;
        break;
    }

    while(numbers[i] >= numbers[i+1]){
        numbers[i] /= 2;
        count += 1;
    }

  }
  if (flag == 1){
      cout<<count<<endl;
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