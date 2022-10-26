#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string>res;
    string input, temp="";
    getline(cin,input);
    for(int i=0; i<input.size(); i++)
    {
        temp=temp+input[i];
        res.push(temp);
        temp="";


    }
    for(int i=0; i<input.size(); i++)
    {
        cout<<res.top();
        res.pop();
    }
}
