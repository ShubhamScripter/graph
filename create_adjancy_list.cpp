#include<bits/stdc++.h>
using namespace std;

int main()
{


//adjancy list

    
    vector<vector<int>>edges(n);
   
    for(auto e:graph)
    {
       
        edges[e[0]].push_back(e[1]);
        edges[e[1]].push_back(e[0]);
    }










    return 0;
}
