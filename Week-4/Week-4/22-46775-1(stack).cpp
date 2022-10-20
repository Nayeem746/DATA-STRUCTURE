#include<iostream>
using namespace std;

int stk[10];
int top = 0;
int MaxSize=10;

bool isEmpty()
{
    return (Top == 0);
}

bool isFull()
{
    return (Top == MaxSize);
}

// check if the stack is full
void push(int value)
{
    if( isFull() )
    {
        cout << "Stack is Full"<<endl;
        return false;
    }

    stk[top] = value;
    top = top + 1;
}

void pop()
{
    if( isEmpty() )
    {
        cout << "Stack empty\n";
        return false;
    }



}



void show()
{
    for(int i = top-1; i>=0; i--)
    {
        cout<< stk[i]<<endl;
    }
}

int main()
{
    push(5);
    push(7);
    show();
    push(6);

     pop();
     pop();
     push(3);
     push(2);
     pop();
    show();
}

