#include<bits/stdc++.h>
using namespace std;

int find_parent(int sv,vector<int>&parent)
{
    if(sv==parent[sv])
    return sv;
    parent[sv]=find_parent(parent[sv],parent);
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
    vector<pair<int,int>>pair_edge;
    while(e--)
    {
        int sv,ev;
        cout<<"enter your starting verticees"<<endl;
        cin>>sv;
        cout<<"enter your ending verticees"<<endl;
        cin>>ev;
        edges[sv].push_back(ev);
        edges[ev].push_back(sv);

        pair_edge.push_back({sv,ev});
        
    }

    vector<int>parent;
    for(int i=0;i<n;i++)
    parent.push_back(i);


    for(auto e:pair_edge)
    {
        int sv=e.first,ev=e.second;
        int p1=find_parent(sv,parent);
        int p2=find_parent(ev,parent);

        if(p1!=p2)
        {
            parent[p1]=p2;
        }
    }


// number of component will be number pf different top most parent.


int num_component=0;
set<int>s;
for(int i=0;i<n;i++)
{
s.insert(find_parent(i,parent));
}

// set size will show number of component.
return s.size();



















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