#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"please enter two numbers:";
	cin>>a>>b;
	if(a>b){
		cout<<" the bigger number is"<<a<<endl;
		cout<<"the smaller number is"<<b<<endl;
	}
    else{
		cout<<"the bigger number is "<<b<<endl;
		cout<<"the smaller number is "<<a<<endl;
	}
	return 0;	
}