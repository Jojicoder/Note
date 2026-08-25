#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int main()
{
    vector<vector<int>> graph = {
        {1,2},
        {0,3},
        {0,4},
        {1},
        {2}
    };

    vector<bool> visited(5,false);
    queue<int> q;

    q.push(0);
    visited[0] = true;

    while(!q.empty())
    {
        int now = q.front();
        q.pop();

        cout << now << " ";

        for(int next : graph[now])
        {
            if(!visited[next])
            {
                visited[next] = true;
                q.push(next);
            }
        }
    }

    cout << endl;
    
    return 0;
}