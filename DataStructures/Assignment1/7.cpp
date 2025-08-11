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
		p->top++;
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
	
	char in[max],postfix[max],ch;
	cout<<"Enter string:";
	cin>>in;
	int i=0,j=0;
	while(in[i] != '\0'){
		if(in[i]=='+' || in[i]=='-' || in[i]=='*' || in[i]=='/' || in[i]=='^' || in[i]=='(' || in[i]=='[' || in[i]=='{'){
			q.push(ob,in[i]);
			}
		else if(in[i]==']' || in[i]=='}' || in[i]==')'){
			while(true){
				ch= q.pop(ob);
				if(ch == '(' || ch== '{' || ch== '['){
					break;
					}
				else{
					postfix[j]=ch;
					j++;
					}
				}
			}
			else{
				postfix[j]=in[i];
					j++;
				}
			i++;
		
		}
		if(ob->top != -1){
			while(ob->top != -1){
				ch=q.pop(ob);
				if(ch!= '(' || ch != '{' || ch!='['){
					postfix[j]=ch;
					j++;
					}
				}
			}
		postfix[j]='\0';
		cout<<"Postfix expression :"<<postfix;
	
	return 0;
}