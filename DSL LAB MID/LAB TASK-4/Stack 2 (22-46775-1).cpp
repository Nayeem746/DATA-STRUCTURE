#include<iostream>
#include<conio.h>
using namespace std;
int top=0;
char stk[10];

void push(char v)
{
    if (top==10)
    cout<<"Stack is full!!";
    else
    {stk[top]=v;
    top++;}
}

void show()
{

    for(int i=top-1;i>=0;i--)
    {
        cout<<stk[i];
    }
}
int main()
{

    push('I');
    push(' ');
    push('a');
    push('m');
    push(' ');
    push('h');
    push('e');
    push('r');
    push('e');
    show();
    getch();
}

