#include<iostream>
using namespace std;
int hcf(int num1,int num2){
	int temp,temp1,temp2;
	temp1=num1;
	temp2=num2;
	while(temp2!=0){
		temp=temp2;
		temp2=temp1%temp2;
		temp1=temp;
	}
	cout<<"HCF of the given number is "<<temp1;
	return temp1;
}
int lcm(int num1,int num2,int hcf){
	cout<<"LCM of the given number is "<<(num1*num2)/hcf;
}
int main(){
	int num1,num2,gcd;
	cout<<"Enter two numbers  ";
	cin>>num1>>num2;
	gcd=hcf(num1,num2);
	cout<<"\n";
	lcm(num1,num2,gcd);
}
