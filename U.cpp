#include <iostream>
using namespace std;
int main(){
	double num;
	cin>>num;
	int integerPart = num;
	float decimalPart = num-integerPart;
	if(decimalPart==0){
				cout<<"int"<<" "<<integerPart<<endl;

	}else{
				cout<<"float"<<" "<<integerPart<<" "<<decimalPart<<endl;

	}
}
