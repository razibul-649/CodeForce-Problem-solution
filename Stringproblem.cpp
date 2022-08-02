#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,s1;
    cin>>s;
    int x =s.length();
    for(int i=0; i<x;i++){
        if(s[i]=='a' || s[i]== 'A' || s[i]=='e' || s[i]== 'E' || s[i]=='i' || s[i]== 'I' || s[i]=='o' || s[i]== 'O' || s[i]=='u' || s[i]== 'U' || s[i]=='y' || s[i]== 'Y'){
           continue;
        }else{
          s1+='.';
          s1+=tolower(s[i]);

        }

    }
    cout<<s1<<endl;
    return 0;
}

