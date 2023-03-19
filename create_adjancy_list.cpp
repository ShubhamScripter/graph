#include<bits/stdc++.h>
using namespace std;

int main()
{


//adjancy list

    int n;
    cout<<"enter your number of verticees"<<endl;
    cin>>n;
    vector<vector<int>>edges(n);
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
        edges[sv].push_back(ev);
        edges[ev].push_back(sv);
    }










    return 0;
}