#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long x,y,z;
	cin>>x>>y>>z;
	cout<<min(x,min(y,z))<<" "<<max(x,max(y,z))<<endl;
}
