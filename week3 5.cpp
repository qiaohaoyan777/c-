#include<iostream>
using namespace std;
int main(){
	double a,b,c,d,e,f,g,h;
	a=1000;
	b=45.50;
	c=a*b;
	cout<<"the amount of the money Joe paid for the stock is"<<c<<endl;
	d=c*0.02;
	cout<<"the amount of commission Joe paid his broker when he bought the stock is"<<d<<endl;
	e=56.90;
	f=e*a;
	cout<<"the amount Joe sold  the stock for is"<<f<<endl;
	g=f*0.02;
	cout<<"The amount of commission Joe paid his broker when he sold the stock is"<<g<<endl;
	h=f-g-c-d;
	cout<<" the amount of profit is "<<h<<endl;
	return 0;
	
}