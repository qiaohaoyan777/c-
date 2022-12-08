#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double w,h,BMI;
	cout<<"your weight(pounds):";
	cin>>w;
	cout<<"your weight is:"<<w<<"pounds"<<endl;
	cout<<"your height(inches):";
	cin>>h;
	cout<<"your height is:"<<h<<"inches"<<endl;
	BMI=w*703.0/h*h;
	if(BMI<=25||BMI>=18.5){
		cout<<" your weight is considered to be optimal"<<endl;
	}
	else if(BMI<18.5){
		cout<<"you are consiedered to be underweight"<<endl;
	}
	else{
		cout<<"you are considered to be overweight"<<endl;
	}
	return 0;
	
	
}