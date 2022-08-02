#include<iostream>
using namespace std;
int main(){

 int n,a,b,c,count=0;
 cin>>n;
 while(n--){

  cin>>a >>b>>c;
  if(a+b+c >1){
    count++;
  }


 }
cout<<count<<endl;
return 0;

}
