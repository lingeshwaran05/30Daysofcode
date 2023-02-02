#include<iostream>
using namespace std;
int main(){
	int num,sum;
	cout<<"Enter the numbers ";
	while(cin>>num){
		if(num!='x'){
			sum+=num;
		}
	}
	cout<<sum;
	
}
