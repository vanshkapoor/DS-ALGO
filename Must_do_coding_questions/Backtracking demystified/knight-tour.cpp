#include <iostream>
#include <vector>

using namespace std;

int moveX[] = {2, 1, -1, -2, -2, -1, 1, 2};
int moveY[] = {1, 2, 2, 1, -1, -2, -2, -1};

bool validmove(int row, int col, int visited[8][8])
{
    if ((row < 8) && (row >= 0) && (col >= 0) && (col < 8) && (visited[row][col] == 0))
    {
        return true;
    }
    return false;
}

bool knight_tour(int visited[8][8], int row, int col, int move)
{
    if (move == 64)
    {
        // print(visited);
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cout << visited[i][j] << " ";
            }
            cout << endl;
        }
        return true;
    }
    else
    {
        cout << move << "-";
        for (int i = 0; i < 8; i++)
        {
            int new_row = moveX[i] + row;
            int new_col = moveY[i] + col;
            if (validmove(new_row, new_col, visited))
            {
                move++;
                visited[new_row][new_col] = move;
                if (knight_tour(visited, new_row, new_col, move))
                {
                    return true;
                }
                move--;
                visited[new_row][new_col] = 0;
            }
        }
    }
    return false;
}

int main()
{

    int visited[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            visited[i][j] = 0;
        }
    }
    visited[0][0] = 1;

    cout << knight_tour(visited, 0, 0, 1);
    // cout << visited[0][1];

    return 0;
}
