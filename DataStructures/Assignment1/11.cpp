#include<iostream>
using namespace std;

int sum(int n){
	if(n==0){
		return 0;
	}
	return (n%10) + sum(n/10);
	}

int main(){
	int num;
	cout<<"Enter number to find digit sum:";
	cin>>num;
	cout<<"Digit sum is : "<<sum(num);
	return 0;
}