#include<iostream>
using namespace std;
bool ispalin(string num){
	int len=num.length();
	for(int i=0;i<len/2;i++){
		if(num[i]!=num12[len-i-1]){
			return false;
		}
	}
	return true;
}
int main(){
	string num;
	cout<<"Enter the number";
	cin>>num;
	if(ispalin(num)){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
