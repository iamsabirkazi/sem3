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
	if(p->top == max-1){
		cout<<"Stack overflow.";
		}
	else{
		p->item[++p->top] =k;
		}
	}

int stack :: pop(stack *p){
	if(p->top== -1){
		cout<<"Stack underflow.";
		return 0;
		}
	else{
		return p->item[p->top--];
		}
	} 

int main(){
	stack q,opstack,oprndstack,*s,*k;
	s= &opstack;
	k= &oprndstack;
	q.create(s);
	q.create(k);
	
	char infix[max],prefix[max],ch;
	cout<<"Enter infix expression:";
	cin>>infix;
	reverse(infix, infix + strlen(infix)); //strrev(infix)
	int i=0,j=0;
	
	while(infix[i]!='\0'){
		if((infix[i]==']') || (infix[i]==')') || (infix[i]=='}') || (infix[i]=='+') || (infix[i]=='-') || (infix[i]=='*') || (infix[i]=='/')){
			q.push(s,infix[i]);
			}
		else if((infix[i]=='[') || (infix[i]=='{') || (infix[i]=='(')){
			while(s->top!=-1){
				ch=q.pop(s);
				if(ch != ']' && ch != '}' && ch != ')'){
					q.push(k,ch);
					}
				}
			}
		else{
			q.push(k,infix[i]);
			}
		i++;
		}
		
		
		if(s->top!=-1){
			while(s->top!=-1){
				ch=q.pop(s);
				if(ch != ']' && ch != '}' && ch != ')'){
					q.push(k,ch);
					}
				}
			}
	while(k->top!=-1){
		ch=q.pop(k);
		if(ch != ']' && ch != '}' && ch != ')'){
		prefix[j]=ch;
		j++;
		}
		}
		prefix[j]='\0';
	
	cout<<"Prefix expression:"<<prefix;
	
	
	return 0;
}