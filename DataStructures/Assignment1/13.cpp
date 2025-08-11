#include <iostream>
using namespace std;

#define MAX 50

class stack {
public:
    int item[MAX];
    int top;

    void create(stack *p);
    void push(stack *p, int x);
    void display(stack *p);
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

void stack::display(stack *p) {
    if (p->top == -1) {
        cout << "Stack is empty\n";
        return;
    }
    for (int i = 0; i <= p->top; i++) {
        cout << "\t" << p->item[i];
    }
    cout << endl;
}

int main() {
    stack s,e,o;
    stack *even = &e;
    stack *odd = &o;

    s.create(even);
    s.create(odd);

    int num;
    
    for (int i = 1; i <= 10; i++) {
        cout << "Enter numbers "<<i<<":";
        cin >> num;
        if (num % 2 == 0) {
            s.push(even, num);
        } else {
            s.push(odd, num);
        }
    }

    cout << "\nEven Stack: ";
    s.display(even);

    cout << "Odd Stack: ";
    s.display(odd);

    return 0;
}