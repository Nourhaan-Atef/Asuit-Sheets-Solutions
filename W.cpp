#include <iostream>
using namespace std;
int main(){
	int a,b;
	long long c;
	string s,q="=";
	cin>>a>>s>>b>>q>>c;
	if(s=="+"){
		if(a+b==c){
			cout<<"Yes"<<endl;
		}
		else{
			c=a+b;
			cout<<c<<endl;
		}
	}else if(s=="-"){
		if(a-b==c){
			cout<<"Yes"<<endl;
		}
		else{
			c=a-b;
			cout<<c<<endl;
		}
	}
	else if(s=="*"){
		if(a*b==c){
			cout<<"Yes"<<endl;
		}
		else{
			c=a*b;
			cout<<c<<endl;
		}
	}
}
