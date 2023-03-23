#include<bits/stdc++.h>
using namespace std;

void dfs(int sv,vector<vector<int>>edges,vector<bool>&visited,int n)
{
    visited[sv]=true;
    cout<<sv<<" ";
    for(auto e:edges[sv])
    {
        if(!visited[e])
        {
            dfs(e,edges,visited,n);
        }
    }
}

int main()

{
    int n;
    cout<<"enter your number of verticees"<<endl;
    cin>>n;
    vector<vector<int>>edges(n);
    int e;
    cout<<"enter your number of edges"<<endl;
    cin>>e;
    while(e--)
    {
        int sv,ev;
        cout<<"enter your starting verticees"<<endl;
        cin>>sv;
        cout<<"enter your ending verticees"<<endl;
        cin>>ev;
        edges[sv].push_back(ev);
        edges[ev].push_back(sv);
    }

    //dfs
vector<bool>visited(n,false);

    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            dfs(i,edges,visited,n);
        }
    }

    // queue<int>pv;
    

    // pv.push(0); visited[0]=true;

    // while(!pv.empty())
    // {
    //     int top=pv.front();
    //     cout<<top<<" ";
    //     pv.pop();
    //     for(auto e:edges[top])
    //     {
    //         if(!visited[e])
    //         {
    //             pv.push(e); visited[e]=true;
    //         }
    //     }
    // }

    return 0;
}