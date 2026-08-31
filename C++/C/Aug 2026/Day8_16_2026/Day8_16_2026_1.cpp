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

int main(){
    vector<vector<int>> graph ={
        {1,2},
        {0,3},
        {0,4},
        {1},
        {2}
    };

    vector<bool> visited(5,false);

    int start = 0;
    int goal = 4;

    if(())
}