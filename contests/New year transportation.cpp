#include<bits/stdc++.h>

using namespace std;

#define MX 100010

vector <int> graph[MX];
bool  vis[MX];

//dfs e je node dibo oi node theke je je node e jawa jay shegula node er man 1 ashbe

void dfs(int node)
{
    vis[node] = 1;
    for(int i=0; i < graph[node].size(); i++)
    {
        int next= graph[node][i];
        if (vis[next]==0)
            dfs(next);
    }
}

int main()
{
    int n,t;
    cin>>n;
    cin>>t;
    for (int i = 1; i<n; i++)
    {
        int a;
        cin>>a;
        graph[i].push_back(i+1);
    }
    dfs(1);

    if (vis[t]==1)
    {
        cout<<"YES"<<endl;
    }

    else cout<<"NO"<<endl;

    return 0;
}
