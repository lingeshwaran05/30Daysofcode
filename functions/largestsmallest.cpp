#include<iostream>
using namespace std;
int largest(int a,int b,int c){
	int large=a;
	if(b>large){
		return b;
	}else if(c>large){
		return c;
	}else{
		return a;
	}
}
int smallest(int a,int b,int c){
	int small=a;
	if(b<small){
		return b;
	}else if(c<small){
		return c;
	}else{
		return a;
	}
}
int main(){
	int a,b,c;
	cout<<"Enter first num";
	cin>>a;
	cout<<"Enter second num";
	cin>>b;
	cout<<"Enter third num";
	cin>>c;
	cout<<largest(a,b,c)<<'\n';
	cout<<smallest(a,b,c);
}
