#include<iostream>
using namespace std;
int sum(int num1,int num2){
	return num1+num2;
}
int main(){
	int num1,num2,result;
	cout<<"Enter two numbers  ";
	cin >> num1>> num2;
	result=sum(num1,num2);
	cout<<result;
}
