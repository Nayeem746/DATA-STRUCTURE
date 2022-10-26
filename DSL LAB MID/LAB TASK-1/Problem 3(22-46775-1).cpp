#include<iostream>
#include<conio.h>
using namespace std;

int odd(int s,int e)
{

    int odd=0;
    for(int i=s; i<=e; i++)
    {
        if(i%2!=0)
        {
            cout<<" "<<i;
        }
    }
}

int main()
{
    int Start,End;

    cout<<"Starting value : ";
    cin>>Start;
    cout<<"Ending value : ";
    cin>>End;


    odd(Start,End);

    getch();
}
