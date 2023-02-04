#include<iostream>
using namespace std;
void oddeven(int num){
if((num|1)>num){
		cout<<"EVEN";
	}else{
		cout<<"ODD";
	}	
}
int main(){
	int num;
	cout<<"Enter a num";
	cin>>num;
	oddeven(num);
}
