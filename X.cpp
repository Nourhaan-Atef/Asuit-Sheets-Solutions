#include <iostream>
using namespace std;
int main(){
long long l1,r1,l2,r2;
cin>>l1>>r1>>l2>>r2;
long long start, end;
if((l2<l1&&r2<l1)||(l2>r1&&r2>r1)){
	cout<<-1<<endl;
}else{
	if(l1>l2){
		start=l1;
	}else{
		start=l2;
	}
	if(r1>r2){
		end=r2;
	}else{
		end=r1;
	}
	cout<<start<<" "<<end<<endl;
}


}
