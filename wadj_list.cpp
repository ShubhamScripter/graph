#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n;
    cout<<"enter your number of verticees"<<endl;
    cin>>n;
    unordered_map<int,pair<int,int>>mp;
    int e;
    cout<<"enter your number if edges"<<endl;
    cin>>e;
    while(e--)
    {
        int sv,ev,w;
        cout<<"enter your starting verticees"<<endl;
        cin>>sv;
        cout<<"enter your ending verticees"<<endl;
        cin>>ev;
        cout<<"enter your weights"<<endl;
        //key-> {weight,othernode}
       mp[sv]={w,ev};
       mp[ev]={w,sv};
    }















    return 0;
}