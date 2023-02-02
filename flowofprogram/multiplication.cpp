#include<iostream>
using namespace std;
int multiplication(int number){
	for(int i=1;i<=50;i++){
		cout<<number<<'*'<<i<<'='<<number*i;
		cout<<'\n';
	}
}
int main(){
	int num,result;
	cout<<"Enter a number  ";
	cin >> num;
	multiplication(num);	
}
