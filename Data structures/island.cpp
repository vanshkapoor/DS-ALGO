#include <iostream>
#include <vector>

using namespace std;

// Complete the connectedCell function below.
int checkforconnection(vector<vector<int>> &matrix, int i1, int j1, int r, int c)
{
    if (matrix[i1][j1] != 1 || i1 < 0 || i1 >= r || j1 < 0 || j1 >= c)
    {
        return 0;
    }

    matrix[i1][j1] = 2;
    // ctr++;

    return 1 + checkforconnection(matrix, i1 + 1, j1, r, c) +
           checkforconnection(matrix, i1 - 1, j1, r, c) +
           checkforconnection(matrix, i1, j1 - 1, r, c) +
           checkforconnection(matrix, i1, j1 + 1, r, c) +
           checkforconnection(matrix, i1 - 1, j1 - 1, r, c) +
           checkforconnection(matrix, i1 - 1, j1 + 1, r, c) +
           checkforconnection(matrix, i1 + 1, j1 - 1, r, c) +
           checkforconnection(matrix, i1 + 1, j1, r, c);

    // return 0;
}

int connectedCell(vector<vector<int>> matrix)
{

    int r = matrix.size();
    int c = matrix[0].size();
    int cnt = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (matrix[i][j] == 1)
            {
                cnt = max(checkforconnection(matrix, i, j, r, c), cnt);
            }
        }
    }
    return cnt;
}

int main()
{
    vector<vector<int>> m;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> m[i][j];
        }
    }
    cout << connectedCell(m);

    return 0;
}