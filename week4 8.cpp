#include<iostream>
using namespace std;
int main(){
 double a,b;
 cout<<"the weight of the package (kg):";
 cin>>a;
 cout<<"the distance it is to be shipped(miles):";
 cin>>b;
 if((a>20||a<=0)|| (b>3000||b<10)){
  cout<<"we do not accept this package";
 }
 else if(a>0&&a<=2){
  cout<<"the price is:"<<(b/500)*1.10<<endl;
 }
 else if(a>2&&a<=6){
  cout<<"the price is:"<<(b/500)*2.20<<endl;
 }
 else if(a>6&&a<=10){
  cout<<"the price is:"<<(b/500)*3.70<<endl;
 }
 else{
  cout<<"the price is:"<<(b/500)*4.80<<endl;
 }
 return 0;
 
 
}