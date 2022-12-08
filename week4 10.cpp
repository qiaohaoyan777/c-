#include<iostream>
#include<string>
using namespace std;
int main(){
	string a;
	double b;
	cout<<"please enter a medium from Carbon Dioxide, Air,Helium,Hydrogen ";
	cin>>a;
	if(a=="Carbon Dioxide"){
		cout<<"please enter a time(seconds):"<<endl;
		cin>>b;
		if(b<0||b>30){
			cout<<"it is not acceptable!"<<endl;
		}
		else{
			cout<<"the distance is:"<<b*258.0<<"    meters    ";
		}
		
	}
	if(a=="Air"){
		cout<<"please enter a time(seconds):"<<endl;
		cin>>b;
		if(b<0||b>30){
			cout<<"it is not acceptable!"<<endl;
		}
		else{
			cout<<"the distance is:"<<b*331.5<<"    meters    ";
		}
		
	}
	if(a=="Helium"){
		cout<<"please enter a time(seconds):"<<endl;
		cin>>b;
		if(b<0||b>30){
			cout<<"it is not acceptable!"<<endl;
		}
		else{
			cout<<"the distance is:"<<b*972.0<<"    meters    ";
		}
		
	}
	if(a=="Hydrogen"){
		cout<<"please enter a time(seconds):"<<endl;
		cin>>b;
		if(b<0||b>30){
			cout<<"it is not acceptable!"<<endl;
		}
		else{
			cout<<"the distance is:"<<b*1270.0<<"    meters    ";
		}
		
	}
	return 0;
	
	
	
	
	
}