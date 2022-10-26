#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    stack<int>st;
    queue<int>qe ;
    queue<int>qe2;
    int size,value,sum=0;
    cout<<"Enter the size of stack and Queue : ";
    cin>>size;
    cout<<" Enter some Value for Stack : "<<endl;
    for(int i=0;i<size;i++){
        cin>>value;
        st.push(value);
    }
    cout<<"Enter some Value for Queue : "<<endl;
    for(int i =0;i<size;i++){
        cin>>value;
        qe.push(value);
    }
    for(int i=0;i<size;i++){
        sum = st.top()+qe.front();
        qe2.push(sum);
        sum=0;
        st.pop();
        qe.pop();
    }
    for(int i=0;i<size;i++){
        cout<<qe2.front()<<" ";
        qe2.pop();
    }
}
