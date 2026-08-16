#include <iostream>
#include <vector>
using namespace std;

void dfs(int now, vector<vector<int>>& graph, vector<bool>& visited)
{
    visited[now] = true;

    cout << now << " ";

    for (int next : graph[now])
    {
        if (!visited[next])
        {
            dfs(next, graph, visited);
        }
    }
}

int main()
{
    vector<vector<int>> graph = {
        {1, 2},
        {0, 3},
        {0, 4},
        {1},
        {2}
    };

    vector<bool> visited(5, false);

    dfs(0, graph, visited);

    return 0;
}