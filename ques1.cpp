#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll MAXW = 12000;

ll knapsack(ll n, ll w,  vector<pair<ll, ll>> vec)
{

    if(n<0 || w == 0 )
    return 0;

    if(vec[n].first <= w){
    return max( vec[n].second + knapsack(n-1, w - vec[n].first, vec), knapsack(n-1, w, vec));

    }

    return knapsack(n-1, w, vec);

}

int main()
{

    ll n;
    cin>>n;

    vector<pair<ll,ll>> vec(n);

    for(auto &x : vec) cin>>x.first; // weight
    for(auto &x : vec) cin>>x.second; // values

    cout<<knapsack(n-1, MAXW, vec)<<endl;
    
    return 0;


}