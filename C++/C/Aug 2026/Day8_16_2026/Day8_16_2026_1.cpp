#include <iostream>
#include <vector>
using namespace std;

bool dfs(int now,int goal,
            vector<vector<int>>& graph,
            vector<bool>& visited)
 {
                if(now == goal)
                    return true;

                visited[now] =true;

                for(int next : graph[now])
                {
                    if(!visited[next])
                    {
                        if(dfs(next,goal, graph, visited))
                            return true;
                    }
                }

                return false;
}

