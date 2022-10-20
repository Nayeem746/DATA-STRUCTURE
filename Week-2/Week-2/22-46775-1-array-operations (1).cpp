#include<iostream>
using namespace std;


void traverse(int arr[], int s)
{
    cout<<"\nArray = [";
    for(int i=0; i <s-1; i++)
        cout<<arr[i]<<",";

    if(s <= 0)
        cout<<" ]\n";
    else
        cout<<arr[s-1]<<"]\n";
}


void insertion(int arr[], int s, int element, int index){

    for(int i=s; i>index; i--){
        arr[i]=arr[i-1];
    }

    arr[index]=element;
}


int searchElement(int arr[], int s, int element){
    for(int i=0;i<s-1;i++)
    {
        if(element==arr[i])
        {
            return i;
        }

    }
    return -1;
}


void deletion(int arr[], int s, int index){
    for(int i=index;i<s;i++)
    {
      arr[i]=arr[i+1];
    }

}



int main()
{
    int ne,element,index;
    cout<< "\nHow many elements? ";
    cin>>ne;


    //Auto input
    int myArray[ne+10];
    for(int i=0; i<ne; i++)
    {
        myArray[i] = rand()%100;
    }

      traverse(myArray,ne);



    cout<<"\nWhich element do you want to insert? ";
    cin>>element;
    cout<<"\nWhich index? ";
    cin>>index;
    insertion(myArray,ne,element,index);
    ne++;
    traverse(myArray,ne);


    cout<<"Which index do you want to delete? ";
    cin>>index;
    deletion(myArray,ne,index);
    ne--;
    traverse(myArray,ne);



    cout<<"\nWhich element do you want to find? ";
    cin>>element;
    index=searchElement(myArray,ne,element);
    if(index<0)
    {
        cout<< "Not found.";
    }
    else
    {
        cout<<"Found at index- "<<index;
    }

    main();
}
