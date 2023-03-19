#include<bits/stdc++.h>
using namespace std;

int main()
{


//adjancy graph

    int n;
    cout<<"enter your number of verticees"<<endl;
    cin>>n;
    vector<vector<int>>edges(n,vector<int>(n,0));
    int e;
    cout<<"enter your number if edges"<<endl;
    cin>>e;
    while(e--)
    {
        int sv,ev;
        cout<<"enter your starting verticees"<<endl;
        cin>>sv;
        cout<<"enter your ending verticees"<<endl;
        cin>>ev;
        edges[sv][ev]=1;
        edges[ev][sv]=1;
    }










    return 0;
}