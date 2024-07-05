#include <bits/stdc++.h>
using namespace std;
#define N 4

bool isSafe(int a, int b, int maze[N][N])
{

    if (a >= 0 and a < N and b >= 0 and b < N and maze[a][b] == 1)
        return true;
    else
        return false;
}

bool solveUtil()
{
}

bool solve(int maze[N][N])
{
    int sol[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            sol[i][j] = 0;
    }

    if (solveUtil(maze, sol, 0, 0) == false)
        cout << "Solu"
}

int main()
{

    int maze[N][N] = {{1, 0, 0, 0},
                      {1, 1, 0, 1},
                      {0, 1, 0, 0},
                      {1, 1, 1, 1}};
    return 0;
}