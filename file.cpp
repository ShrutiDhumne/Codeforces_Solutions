#include <iostream>
#include <string>
using namespace std;

int main()
{
    char s[6];
    int firsthalf = 0;
    int  secondhalf = 0;
    for(int i=0;i<6;i++){
        cin>>s[i];
    }
    
    for(int i=0;i<6;i++){
        if (i<3){
            firsthalf = (int)s[i]+firsthalf;
        }
        else {
            secondhalf = (int)s[i]+secondhalf;
        }
    }
    
    if(firsthalf == secondhalf){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}
