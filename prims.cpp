#include<bits/stdc++.h>
using namespace std;

void prims(int n,vector<bool>visited,priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq,vector<vector<int>>mp,vector<vector<int>>&mst)
{
    
    pq.push({0,{0,-1}});
    while(!pq.empty())
    {
        int w=pq.top().first,sv=pq.top().second.first,ev=pq.top().second.second;
        pq.pop();
        if(!visited[sv])
        {
            visited[sv]=true;
            if(ev!=-1) // if initial node is taken
            {
                cout<<"yes";
            mst[ev][sv]=w;
            mst[sv][ev]=w;
            }
            for(int i=0;i<n;i++)
            {
                if(mp[sv][i] && !visited[i])
                {
                    pq.push({mp[sv][i],{i,sv}});
                }
            }
        }

    }



}




int main()

{
    int n;
    cout<<"enter your number of verticees"<<endl;
    cin>>n;
    vector<vector<int>>mp(n,vector<int>(n,0));
    int e;
    cout<<"enter your number if edges"<<endl;
    cin>>e;
    while(e--)
    {
        int sv,ev,w;
        cout<<"enter your edge"<<endl;
        cin>>sv>>ev>>w;
        //key-> {weight,othernode}
       mp[sv][ev]=w;
       mp[ev][sv]=w;
    }

vector<vector<int>>mst(n,vector<int>(n,0));
priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
    //this will tell which node is present or not in mst
vector<bool>visited(n,false);
    //prims algorithm

    prims(n,visited,pq,mp,mst);




    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mst[i][j])
            {
                cout<<i<<"  "<<j<<"  "<<mst[i][j]<<endl;
            }
        }
    }

















    return 0;
}