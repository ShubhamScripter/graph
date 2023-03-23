#include<bits/stdc++.h>
using namespace std;

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

    //bfs

    queue<int>pv;
    vector<bool>visited(n,false);

    pv.push(0); visited[0]=true;

    while(!pv.empty())
    {
        int top=pv.front();
        cout<<top<<" ";
        pv.pop();
        for(auto e:edges[top])
        {
            if(!visited[e])
            {
                pv.push(e); visited[e]=true;
            }
        }
    }

    return 0;
}