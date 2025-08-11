#include<iostream>
using namespace std;

class stack {
    int arr[5];
    int top;
public:
    stack() {
        top = -1;
        for(int i = 0; i < 5; i++) {
            arr[i] = 0;
        }
        cout << "Stack is created\n";
    }

    bool isempty() {
        if (top == -1) {
            return true;
        } else {
            return false;
        }
    }

    bool isfull() {
        if (top == 4) {
            return true;
        } else {
            return false;
        }
    }

    void push() {
        if (isfull()) {
            cout << "Stack is full\n";
            return;
        }
        int s;
        cout << "Enter element: ";
        cin >> s;
        top++;
        arr[top] = s;
        cout << "Element pushed\n";
    }

    void pop() {
        if (isempty()) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Popped: " << arr[top] << "\n";
        arr[top] = 0;
        top--;
    }

    void display() {
        if (isempty()) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack elements:\n";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << "\n";
        }
    }
};

void menu() {
    stack ob;
    while (true) {
        int ch;
        cout << "\n1. Is Empty\n2. Is Full\n3. Push\n4. Pop\n5. Display\n6. Exit\n";
        cout << "Enter choice: ";
        cin >> ch;
        switch (ch) {
        case 1:
            if(ob.isempty()){
            	cout << "Stack is empty\n";
            	} 
            else {
            	cout << "Stack is not empty\n";
        		}
            break;
        case 2:
            if (ob.isfull()) {
            	cout << "Stack is full\n";
        		} 
        	else {
            	cout << "Stack is not full\n";
        		}
            break;
        case 3:
            ob.push();
            break;
        case 4:
            ob.pop();
            break;
        case 5:
            ob.display();
            break;
        case 6:
            return;
        default:
            cout << "Invalid choice\n";
        }
    }
}

int main() {
    menu();
    return 0;
}
