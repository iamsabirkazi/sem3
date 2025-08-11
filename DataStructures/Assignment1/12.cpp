#include<iostream>
using namespace std;

int face(int n){
	if (n<10){
		return n;
		}
	int k=0,r=0;
	while(n>0){
		r=n%10;
		k +=r;
		n=n/10;
		}
	return face(k);
	}


int main(){
	int num;
	cout<<"Enter number to find face value:";
	cin>>num;
	cout<<"Face value is : "<<face(num);
	return 0;
}