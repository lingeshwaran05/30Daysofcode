#include<iostream>
#include<cmath>
using namespace std;
string isprime(int num){
	string s1="prime";
	string s2="composite";
	string s3="invalid input";
	if(num<=1){
		return s3;
	}
	for (int i = 2; i < num; i++)
        if (num % i == 0)
            return s2;
    return s1;
}
int main(){
	int num;
	cout<<"Enter a num";
	cin>>num;
	cout<<isprime(num);
}
