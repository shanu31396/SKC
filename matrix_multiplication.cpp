#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i, j, k, row1, col1, row2, col2, sum = 0;
    char end = 2;
    cout << "Enter the no. of rows and columns for 1st matrix : ";
    cin >> row1 >> col1;
    cout << "Enter the no. of rows and columns for 2nd matrix : ";
    cin >> row2 >> col2;
    int mat1[row1][col1], mat2[row2][col2], mat3[row1][col2];
    if (col1 == row2) // checking condition for matrix multiplication
    {
        // taking values of 1st matrix
        cout << "Enter the value of 1st matrix :";
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                cin >> mat1[i][j];
            }
        }
        // taking values of 2nd matrix
        cout << "Now, enter the value of 2nd matrix : ";
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                cin >> mat2[i][j];
            }
        }
        // performing calculations
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col2; j++)
            {
                for (k = 0; k < row2; k++)
                {
                    sum += mat1[i][k] * mat2[k][j];
                }
                mat3[i][j] = sum;
                sum = 0;
            }
        }
        // printing the product of matrix
        cout << "Product of given matrices is :\n";
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                cout << setw(5)<<mat3[i][j];
                cout << "\t";
            }
            cout << endl;
            
        }
        cout<<end;
 }
    else
    {
        cout << "Multiplication is not possible.";
        cout << end;
        return (0 - 0);
    }
}