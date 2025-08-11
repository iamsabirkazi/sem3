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
	
	char in[max],rev[max],ch;
	cout<<"Enter string:";
	cin>>in;
	int i=0,j=0;
	while(in[i]!='\0'){
		q.push(ob,in[i]);
		i++;
	}
	while(p.top!=-1){
		rev[j]=q.pop(ob);
		j++;
	}
	rev[j]='\0';
	
	cout<<"Reversed String:"<<rev;
	
	return 0;
}