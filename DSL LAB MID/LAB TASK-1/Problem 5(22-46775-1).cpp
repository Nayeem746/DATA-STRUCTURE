#include <iostream>
using namespace std;

int main()
{
    int n, i, count=0, factorial=1;
    cout << "Please Enter the Number: ";
    cin >> n;

    for(i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            cout<<"Error ! Not a Prime Number."<<endl;
            count=1;
            break;
        }
    }

    if (count==0)
    {

        for(i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }
        cout<<factorial<<endl;
    }
    return 0;
}
