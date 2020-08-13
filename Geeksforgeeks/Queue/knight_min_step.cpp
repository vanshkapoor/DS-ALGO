#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class cell
{
public:
    int x;
    int y;
    int dist;
    cell(int X, int Y, int Dist)
    {
        x = X;
        y = Y;
        dist = Dist;
    }
};

void calculateMinStep(pair<int, int> inStep, pair<int, int> targStep, int N)
{
    queue<cell> q;
    q.push(cell(inStep.first, inStep.second, 0));

    bool visited[N + 1][N + 1];

    // x and y direction, where a knight can move
    int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2};
    int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};

    // make all cell unvisited
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++)
            visited[i][j] = false;

    while (!q.empty())
    {
        /* code */
        cell obj = q.front();
        q.pop();

        if (obj.x == targStep.first && obj.y == targStep.second)
        {
            return obj.dist;
        }

        for (int i = 0; i < 8; i++)
        {
            int newX = obj.x + dx[i];
            int newY = obj.y + dy[i];

            if (isValid(newX, newY) && !visited[newX][newY])
            {
                visited[newX][newY] = true;
                q.push(cell(newX, newY, obj.dist + 1));
            }
        }
    }
}

int main()
{
    pair<int, int> inStep(0, 0);
    pair<int, int> targStep(30, 30);
    int N = 30;
    calculateMinStep(inStep, targStep, N);

    return 0;
}