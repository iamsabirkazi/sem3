#include<iostream>
#define max 50
using namespace std;

class stack{
	public:
	int item[max],top;
	
	void create(stack *);
	void push(stack *,int);
	int pop(stack *);
	
	
};

void stack :: create(stack *p){
	
	p->top=-1;
	
}

void stack :: push(stack *p,int k){
	
	if(p->top==max-1){
		cout<<"Stack Overflow!!!";
	}
	else{
		++p->top;
		p->item[p->top]=k;
	}
}

int stack :: pop(stack *p){
	
	if(p->top==-1){
		cout<<"Stack Underflow";
		return 0;
	}
	return(p->item[p->top--]);
	
}

int main(){
	stack *ob,p,q;
	ob=&p;
	q.create(ob);
	
	int num;
	cout<<"Enter no:";
	cin>>num;
	
	if(num==0){
		cout<<"Binary :0";
		return 0;
		}
	
	while(num>0){
		q.push(ob,num%2);
		num /=2;
		}
	
	cout<<"Binary :";
	while(ob->top != -1){
		cout<<q.pop(ob);
		}
	
	return 0;
}