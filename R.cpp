#include <iostream>
using namespace std;
int main(){
	long long x,years,months,days;
	cin>>x;
	years=x/365;
	months=(x%365)/30;
	days=(x%365)%30;
	cout<<years<<" years"<<endl;
	cout<<months<<" months"<<endl;
	cout<<days<< " days"<<endl;
	
}
