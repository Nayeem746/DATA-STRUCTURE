#include <iostream>
using namespace std;


int Arr[10];
int front = -1;
int rear = -1;

void enqueue(int v)
{
    Arr[rear]=v;
    front=0;
    rear++;
}

void dequeue()
{
    front++;
}
void show()
{
    cout<<endl;
    for( int i=front ; i<= rear ; i++)
    {
        cout<<Arr[i]<<" ";
    }

    cout<<endl;
}
int main()
{
    enqueue(2);

    enqueue(3);

    enqueue(5);

    enqueue(7);

    enqueue(8);

   show();
    dequeue();

    dequeue();
    show();
}
