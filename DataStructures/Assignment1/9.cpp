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
	
	char in[max],ch;
	cout<<"Enter postfix Expression:";
	cin>>in;
	
	int i=0,op1,op2;
	while(in[i] != '\0'){
		if(in[i] == '+' || in[i] == '-' || in[i] == '*' || in[i] == '/'){
			op2=q.pop(ob);
			op1=q.pop(ob);
			
			switch(in[i]){
				
				case '+':
					q.push(ob,op1 + op2);
					break;
				case '-':
					q.push(ob,op1 - op2);
					break;
				case '*':
					q.push(ob,op1 * op2);
					break;
				case '/':
					q.push(ob,op1 / op2);
					break;
				
				}
			}
		else{
			q.push(ob,in[i] - '0');
		}
		i++;
		
		}
	cout<<"Result :"<<q.pop(ob);
	return 0;
}