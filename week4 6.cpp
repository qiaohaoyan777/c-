#include<iostream>
#include<string>
using namespace std;
int main(){
 string a,b;
 cout<<"please enter two different colors:"<<endl;
 cin>>a;
 cin>>b;
 if((a=="red"&&b=="blue")||(a=="blue"&&b=="red")){
  cout<<"purple"<<endl;
 }
 else if((a=="red"&&b=="yellow")||(a=="yellow"&&b=="red")){
  cout<<"orange"<<endl;
 }
 else if((a=="blue"&&b=="yellow")||(a=="yellow"&&b=="blue")){
  cout<<"green"<<endl;
 }
 else{
  cout<<"error"<<endl;
 }
 return 0;
}