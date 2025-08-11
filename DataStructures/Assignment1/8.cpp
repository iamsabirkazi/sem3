#include <iostream>
using namespace std;

#define MAX 50

class stack {
public:
    int item[MAX];
    int top;

    void create(stack *p);
    void push(stack *p, int x);
    int pop(stack *p);
};

void stack::create(stack *p) {
    p->top = -1;
}

void stack::push(stack *p, int x) {
    if (p->top == MAX - 1) {
        cout << "Stack is overflow\n";
    } else {
        p->top++;
        p->item[p->top] = x;
    }
}
int stack::pop(stack *p){
	if(p->top==-1){
		cout<<"Stack underflow";
		return 0;
		}
	else{
		return p->item[p->top--];
		}
}

int main(){
	stack *p,obj,q;
	p=&obj;
	q.create(p);
	
	char arr[MAX],k;
	int i=0;
	bool found=true;
	cout<<"Enter expression:";
	cin>>arr;
	while(arr[i]!='\0'){
		if(arr[i]=='[' || arr[i]=='{' || arr[i]=='(' ){
			q.push(p,arr[i]);
			}
		else if(arr[i]==']' || arr[i]=='}' || arr[i]==')'){
			k=q.pop(p);
			if((k=='[' && arr[i] !=']') || (k=='{' && arr[i]!='}') || (k=='(' && arr[i]!=')')){
				found=false;
				break;
				}
			}
			i++;
	}
	if(p->top==-1 && found){
		cout<<"Expression is Valid";
		}
	else{
		cout<<"Expression is invalid";
		}

}