#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a=0;
        if(s[0]=='y'||s[0]=='Y')
        {
            a++;
        }
        if(s[1]== 'e'||s[1]=='E')
        {
          a++;
        }
        if(s[2]=='s'||s[2]=='S'){
            a++;
        }
        if(a==3)
        {cout<<"YES"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }

    return 0;
}
