#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    
    int firsthalf = 0;
    int  secondhalf = 0;
    cin>>t;
    char s[6];

    for(int j=0; j<t;j++){
        for(int i=0;i<6;i++){
            cin>>s[i];
            if (i<3){
                firsthalf = (int)s[i]+firsthalf;
            }
            else {
                secondhalf = (int)s[i]+secondhalf;
            }
        }
        if(firsthalf == secondhalf){
            cout<<"\nYes";
        }else{
            cout<<"\nNo";
        }
        firsthalf=secondhalf=0;
    }
    return 0;
}
