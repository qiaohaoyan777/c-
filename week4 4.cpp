#include<iostream>
using namespace std;
int main(){
	double l1,l2,w1,w2,a1,a2;
	cout<<"the length of first rectangle is:"<<endl;
	cout<<"the wide of first rectangle is:"<<endl;
	cin>>l1>>w1;
	a1=l1*w1;
	cout<<"the length of second rectangle is:"<<endl;
	cout<<"the wide of second rectangle is:"<<endl;
	cin>>l2>>w2;
	a2=l2*w2;
	if(a1>a2){
		cout<<"the area of first retangle is greater"<<endl;
	}
	else if(a1=a2){
		cout<<"the areas are the same"<<endl;
	}
	else{
		cout<<"the area of second retangle is greater"<<endl;
	}
	return 0;

	
}