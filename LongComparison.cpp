#include <bits/stdc++.h>
using namespace std;
 
void solve(){
 
    long double num1,num2,num3,num4;
    cin>>num1>>num2>>num3>>num4;
     if(num2==num4)
        num2=0,num4=0;
     else if(num2>num4)
        num2=num2-num4,num4=0;
     else
        num4=num4-num2,num2=0;
    
     num1=num1*pow(10,num2);
     num3=num3*pow(10,num4);
 
    if(num1<num3)
        cout<<"<"<<endl;
    else if(num1>num3)
        cout<<">"<<endl;
    else
        cout<<"="<<endl;
        
}
 
int main(){
    int t;
    cin>>t;
    for(int i = 0;i<t;i++){
        solve();
    }
    return 0;
}