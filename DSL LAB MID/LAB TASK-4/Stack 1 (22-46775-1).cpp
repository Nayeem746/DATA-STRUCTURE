#include<iostream>
using namespace std;
int top=0;
int stk[10];

void push(int v)
{
    if (top==10)
        cout<<"Stack is full !";
    else
    {
        stk[top]=v;
        top++;
    }
}
void pop()
{
    top--;
}
void show()
{

    for(int i=top-1; i>=0; i--)
    {
        cout<<stk[i]<<endl;
    }

}
int main()
{
    cout<<"Push"<<endl;
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    show();
    cout<<"Pop"<<endl;
    pop();
    pop();
    show();
}

