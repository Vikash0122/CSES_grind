#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n,a,b;
    int curr_end=0,res=0;
    cin>>n;
    vector<pair<int,int>> movies;

    while(n--)
    {
        cin>>a>>b;
        movies.push_back(make_pair(b,a));
    }

    sort(movies.begin(), movies.end());

    for(auto it : movies)
    {
        if(it.second>=curr_end)
        {
            curr_end=it.first;
            res++;
        }
    }
    cout<<res;
    return 0;
}
