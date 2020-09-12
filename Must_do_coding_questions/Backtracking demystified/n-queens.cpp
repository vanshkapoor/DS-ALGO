#include <iostream>

using namespace std;

bool validcell(bool board[4][4], int new_row, int new_col, int size)
{
    bool valid = true;
    for (int i = 0; i < size; i++)
    {
        if (board[i][new_col])
        {
            valid = false;
        }
    }

    // diagnol
    for (int i = new_row, j = new_col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j])
        {
            valid = false;
        }
    }

    for (int i = new_row, j = new_col; i >= 0 && j < size; i--, j++)
    {
        if (board[i][j])
        {
            valid = false;
        }
    }

    return valid;
}

bool queens(bool board[4][4], int size, int row)
{
    if (row == size - 1)
    {
        // print(board);
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }

        return true;
    }
    else
    {
        cout << row << "-";
        for (int i = 0; i < size; i++) //i = col
        {
            int new_row = row + 1;

            if (validcell(board, new_row, i, size))
            {
                board[new_row][i] = true;
                if (queens(board, size, new_row))
                {
                    return true;
                }
            }
            board[new_row][i] = false;
        }
        return false;
    }
}

int main()
{
    bool board[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            board[i][j] = false;
        }
    }

    queens(board, 4, -1);

    return 0;
}