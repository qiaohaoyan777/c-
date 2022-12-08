#include<iostream>
#include<string>
using namespace std;
int main()
{
 string a, b, c;
 double d, e, f,avg;
 cout << "Please enter the month:";
 cin >> a;
 cout << "Please enter the Please enter the precipitation:";
 cin >> d;
 cout << "The precipitation of "<< a<<" is " << d<<endl;
 cout << "Please enter the month:";
 cin >> b;
 cout << "Please enter the Please enter the precipitation:";
 cin >> e;
 cout << "The precipitation of " << b << " is " << e << endl;
 cout << "Please enter the month:";
 cin >> c;
 cout << "Please enter the Please enter the precipitation:";
 cin >> f;
 cout << "The precipitation of " << c << " is " << f << endl;
 avg = (d + e + f) / 3.0;
 cout << "The average rainfall for "<<a<<","<<b<<"and"<<c<<"is" <<avg<<"inches";
 return 0;
}