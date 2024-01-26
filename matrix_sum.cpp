#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the no. of rows ";
    cin>>row;
    cout<<"Enter the no. of columns ";
    cin>>col;
    int a[row][col], b[row][col], c[row][col];
    cout<<"Enter the value of 1st matrix :\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter the value of 2nd matrix :\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>b[i][j];
        }  
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    cout<<"Sum of given matrix is : "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<c[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
        return 0;
}