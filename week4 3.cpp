#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"please enter your year of birth:"<<endl;
	cout<<"please enter your curren year:"<<endl;
	cin>>a>>b;
	c=b-a;
	if(c<=28||c>=18){
		cout<<"you are eligible in age"<<endl;
	}
	else{
		cout<<"you are not eligible in age"<<endl;
		
	}
	return 0;
	
}