#include<iostream>
#define max 5

using namespace std;

class queue{
    public:
    int item[max],front,rear;
    void create(queue *);
    void isempty(queue *);
    void isfull(queue *);
    void insert(queue *,int);
    int remove(queue *);
    void display(queue *);

};

void queue :: create(queue *q){
    q->front = q->rear = -1;
    cout<<"Queue is created.";
}

void queue:: isempty(queue *q){
    if(q->front == q->rear){
        cout<<"Queue is empty.";
    }
    else{
        cout<<"Queue is not empty.";
    }
}

void queue :: isfull(queue *q){
    if(q->rear == max-1){
        cout<<"Queue is full.";
    }
    else{
        cout<<"Queue is not full.";
    }
}

void queue :: insert(queue *q,int s){
    if(q->rear == max-1){
        cout<<"Queue is full.";
    }
    else{
        ++ q->rear;
        q->item[q->rear] = s;
        cout<<s<<" Is inserted.";
    }
}

int queue :: remove(queue *q){
    if(q->front == q->rear){
        cout<<"Queue is empty.";
        return 0;
    }
    else{
        ++ q->front;
        return q->item[q->front];
    }
}

void queue :: display(queue *q){
    for(int i = q->front +1; i <= q->rear; i++){
        cout<<"\t"<<q->item[i];
    }
}

int main(){
    queue s,*k,q;
    k=&q;

    while(true){
        int ch,n;
        cout<<"\n1.create()\n2.isempty()\n3.isfull()\n4.insert()\n5.remove\n6.display()\n7.Exit.\nEnter choice:";
        cin>>ch;
        switch(ch){
            case 1:
                s.create(k);
                break;
            case 2:
                s.isempty(k);
                break;
            case 3:
                s.isfull(k);
                break;
            case 4:
                cout<<"Enter element to insert:";
                cin>>n;
                s.insert(k,n);
                break;
            case 5:
                cout<<"Removed element: "<<s.remove(k);
                break;
            case 6:
                s.display(k);
                break;
            case 7:
                return 0;
            default :
                cout<<"Select a valid option.\n";

        }
    }

}