#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	unsigned seed =time(0);

	srand(seed);
	int x=rand();
	int y=rand();
	int answer=x+y;
	int user_answer;
	cout<<x<<endl;
	cout<<y<<endl;
	cout<<"your answer is:"<<endl;
	cin>>user_answer;
	if (answer==user_answer){
		cout<<"your answer is correct"<<endl;
	}
	else{
		cout<<"your answer is wrong,and the correct answer is:"<<answer<<endl;
	}
	return 0;
}