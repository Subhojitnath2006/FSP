#include <iostream>
#include <iomanip>
using namespace std;

void matrixMul(int A[10][10], int B[10][10], int C[10][10], int r1, int c1, int r2, int c2)
{
    if (c1 == r2)
    {
        for (int i = 0; i < r1; ++i)
        {
            for (int j = 0; j < c2; ++j)
            {
                C[i][j] = 0;
                for (int k = 0; k < c1; ++k)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        cout << "Resultant matrix:" << endl;
        for (int i = 0; i < r1; ++i)
        {
            for (int j = 0; j < c2; ++j)
            {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Multiplication not possible" << endl;
    }
}

int main()
{
    int r1, c1, r2, c2;
    cout << "Enter number of rows and columns of 1st matrix: ";
    cin >> r1 >> c1;
    cout << "Enter number of rows and columns of 2nd matrix: ";
    cin >> r2 >> c2;

    int A[10][10], B[10][10], C[10][10];

    cout << "Enter elements of 1st matrix:" << endl;
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c1; ++j)
        {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of 2nd matrix:" << endl;
    for (int i = 0; i < r2; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            cin >> B[i][j];
        }
    }

    matrixMul(A, B, C, r1, c1, r2, c2);

    return 0;
}
