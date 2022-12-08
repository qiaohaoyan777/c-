#include<iostream>
using namespace std;
int main(){
	double a,b,c;
	cout<<"please enter the time of the first half(in seconds):"<<endl;
	cin>>a;
	cout<<"please enter the time of the total race(in seconds):"<<endl;
	cin>>b;
	c=b-a;
	if(a>c){
	    cout<<"Congratulation! "<<endl;
	}
	else{
		cout<<"Do not accept negative values for either time. "<<endl;
	}
	return 0;
}