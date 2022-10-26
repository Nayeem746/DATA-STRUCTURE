#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cout << "Enter the number of rows of Matrix A: ";
    cin >> a;
    cout << "Enter the number of column of Matrix A: ";
    cin >> b;
    cout << "Enter the number of rows of Matrix B: ";
    cin >> c;
    cout << "Enter the number of column of Matrix B: ";
    cin >> d;
    cout << "Enter the number of rows of Matrix C: ";
    cin >> e;
    cout << "Enter the number of column of Matrix C: ";
    cin >> f;

    int A[a][b], B[c][d], C[e][f];
    cout<<"Please enter the value of matrix A: "<<endl;
    for (int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cin>>A[i][j];
        }
    }

    cout<<"Please enter the value of matrix B: "<<endl;
    for (int i = 0; i < c; i++)
    {
        for(int j = 0; j < d; j++)
        {
            cin>>B[i][j];
        }
    }

    cout<<"Please enter the value of matrix C: "<<endl;
    for (int  i = 0; i < e; i++)
    {
        for(int  j = 0; j < f; j++)
        {
            cin>>C[i][j];
        }
    }
    if((a == c) && (c == e) && (b == d) && (d == f))
    {
        int SUM[a][b];
        for (int i = 0; i < a; i++)
        {
            for(int j = 0; j < b; j++)
            {
                SUM[i][j] = A[i][j] + B[i][j] + C[i][j];
            }
        }

        cout<<" SUM Matrix"<<endl;
        for (int  i = 0; i < a; i++)
        {
            for(int  j = 0; j < b; j++)
            {
                cout << SUM[i][j] << " ";
            }
            cout << endl;
        }
    }

    else
    {
        cout<<" Matrix addition is not possible"<<endl;
    }

    return 0;
}
