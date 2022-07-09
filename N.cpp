#include <iostream>
using namespace std;
int main(){
	
char x;
cin>>x;
	if(isupper(x)){
		char y = tolower(x);
		cout<<y<<endl;
	}else{
		char y = toupper(x);
		cout<<y<<endl;
	}
}
